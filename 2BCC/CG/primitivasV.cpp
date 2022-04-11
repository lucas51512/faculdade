#include <allegro.h>
#include <allegro_primitives.h>
#include <allegro_image.h>
#include <math.h>

bool teclas[4] = {false, false, false, false};

typedef struct {
    float cx, cy, raio, traco;
    ALLEGRO_COLOR cor;
} CIRCULO;
typedef struct {
    float x, y, largura, altura, traco;
    ALLEGRO_COLOR cor;
} RETANGULO;

void desenhaCirculo(CIRCULO c){
    if (c.traco==0){
      al_draw_filled_circle(c.cx, c.cy, c.raio, c.cor );
    } else {
      al_draw_circle(c.cx, c.cy, c.raio, c.cor, c.traco);
    }
}
void desenhaRetangulo(RETANGULO r){
   if (r.traco==0) {
      al_draw_filled_rectangle(r.x, r.y, r.x+r.largura, r.y+r.altura,
                               r.cor);
   } else {
      al_draw_rectangle(r.x, r.y, r.x+r.largura, r.y+r.altura,
                        r.cor, r.traco);
   }
}

bool colideCirc ( CIRCULO a, CIRCULO b ){
     float dx, dy, h;
     dx = a.cx - b.cx;
     dy = a.cy - b.cy;
     h = sqrt ( pow(dx,2) + pow(dy, 2) );
     if ( h <= a.raio + b.raio)
        return true;
     else
        return false;
}
//COLISÃO AABB (ALIGNED AXIS BOUNDING BOX)
bool colideRet ( RETANGULO a, RETANGULO b ){
    if ( a.x + a.largura >= b.x &&
         b.x + b.largura >= a.x &&
         a.y + a.altura >= b.y &&
         b.y + b.altura >= a.y ) {
        return true;
    } else {
        return false;
    }
}

bool colideRetCirc ( RETANGULO r, CIRCULO c ){
    float x, y;
    x = c.cx;
    y = c.cy;

    if ( c.cx > r.x+r.largura )
      x = r.x + r.largura;
    else if (c.cx < r.x)
      x = r.x;

    if ( c.cy > r.y + r.altura )
       y = r.y + r.altura;
    else if (c.cy < r.y )
       y = r.y;
    float d = sqrt( pow(c.cx - x, 2) + pow (c.cy - y, 2) );

    if ( d <= c.raio)
        return true;
    else
        return false;
}

int main(){
    ALLEGRO_DISPLAY *janela = NULL;
    ALLEGRO_COLOR vermelho, azul, verde, amarelo;
    ALLEGRO_EVENT_QUEUE *fEventos = NULL;
    ALLEGRO_EVENT ev;
    ALLEGRO_BITMAP *img1 = NULL;

   al_init();
   al_init_primitives_addon();
   al_init_image_addon();

   fEventos = al_create_event_queue();

   al_install_keyboard();
   al_install_mouse();

   al_register_event_source(fEventos, al_get_keyboard_event_source());
   al_register_event_source(fEventos, al_get_mouse_event_source());

   vermelho = al_map_rgb(255, 0 ,0);
   azul = al_map_rgb(0,0,255);
   verde = al_map_rgb(0,255,0);
   amarelo = al_map_rgb(255,255,0);
   janela = al_create_display(800, 600);

   CIRCULO c1= {200, 200, 60, 5, vermelho};
   CIRCULO c2= {500, 300, 80, 3, azul};
   CIRCULO c3= {0, 0, 150, 0, azul};
   RETANGULO r1= {300, 400, 100, 100, 5, amarelo};
   RETANGULO r2= {450, 450, 100, 100, 3, verde};

   img1 = al_load_bitmap("aviao.png");

   float img1w = al_get_bitmap_width(img1);
   float img1h = al_get_bitmap_height(img1);


   bool movimenta = true;
   while (true) {

      al_wait_for_event_timed(fEventos, &ev, 0.01);

      if (ev.type == ALLEGRO_EVENT_MOUSE_AXES){
         if (movimenta){
           r2.x = ev.mouse.x - r2.largura / 2;
           r2.y = ev.mouse.y - r2.altura / 2;
         }
      }
      if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN){
         // if (c3.cor == azul)
            c3.cor = amarelo;
            movimenta = !movimenta;
         // else
         //   c3.cor = azul;
      }

      if (ev.type == ALLEGRO_EVENT_KEY_DOWN){
         if (ev.keyboard.keycode == ALLEGRO_KEY_A){
            teclas[0] = true;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_D){
            teclas[1] = true;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_W){
            teclas[2] = true;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_S){
            teclas[3] = true;
         }
      }
      if (ev.type == ALLEGRO_EVENT_KEY_UP){
         if (ev.keyboard.keycode == ALLEGRO_KEY_A){
            teclas[0] = false;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_D){
            teclas[1] = false;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_W){
            teclas[2] = false;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_S){
            teclas[3] = false;
         }
      }
      if (ev.type == ALLEGRO_EVENT_KEY_CHAR){
         if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE){
            break;
         }
         /*if (ev.keyboard.keycode == ALLEGRO_KEY_D){
            c1.cx += 10;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_A){
            c1.cx -= 10;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_W){
            c1.cy -= 10;
         }
         if (ev.keyboard.keycode == ALLEGRO_KEY_S){
            c1.cy += 10;
         } */
      }

      if (teclas[0]==true) c1.cx -= 1;
      if (teclas[1]==true) c1.cx += 1;
      if (teclas[2]==true) c1.cy -= 1;
      if (teclas[3]==true) c1.cy += 1;

      al_clear_to_color( al_map_rgb(255, 255, 250 ) );

      if ( colideCirc (c1, c2) ) {
          c1.traco = 0;
      } else {
          c1.traco = 2;
      }
      if ( colideRet ( r1 , r2)) {
          r2.traco = 0;
      } else {
          r2.traco = 2;
      }
      if ( colideRetCirc ( r2, c1) )
         c1.traco = 0;
      else
         c1.traco = 2;

      desenhaCirculo(c3);
      desenhaCirculo(c1);
      desenhaCirculo(c2);

      desenhaRetangulo(r1);
      desenhaRetangulo(r2);

      //al_draw_bitmap(img1, 0, 0 , 0);
      //al_draw_scaled_bitmap(img1,0,0,img1w,img1h,200,200,100,100,0);
      //al_draw_rotated_bitmap(img1,512,512,400,300, 45.0 * 3.1415 / 180.0, 0 );

      al_draw_scaled_rotated_bitmap(img1,img1w/2, img1h/2,400,300,0.25,0.25,r2.x * 3.1415 / 180.0, 0);

      al_flip_display();

   }

   //al_rest(3);

}
