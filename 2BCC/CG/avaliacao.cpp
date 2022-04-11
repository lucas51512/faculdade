//Responda �s quest�es abaixo e complete o programa
//com as instru��es adequadas para o seu funcionamento.

#include <allegro.h>
//Adicione as bibliotecas para tratamento de imagens e primitivas do Allegro.
#include <allegro_primitives.h>
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


//Insira os comandos de inicializa��o do Allegro e dos Addons adequados.

    al_init();
   al_init_primitives_addon();


   fEventos = al_create_event_queue();

//O qu� realizam as duas instru��es abaixo?
//R: Permitem que o allegro faça uso do mouse e teclado em sua tela e código.
   al_install_keyboard();
   al_install_mouse();


   al_register_event_source(fEventos, al_get_keyboard_event_source());
   al_register_event_source(fEventos, al_get_mouse_event_source());

   vermelho = al_map_rgb(255, 0 ,0);
   azul = al_map_rgb(0,0,255);
   verde = al_map_rgb(0,255,0);
   amarelo = al_map_rgb(255,255,0);

//Crie uma janela gr�fica de 850 pixels de largura por 600 pixels de altura.
   janela = al_create_display(850, 600);

//Crie dois objetos do tipo CIRCULO e dois do tipo RETANGULO,
//sendo que um objeto de cada tipo deve ser preenchido e os outros
//sem preenchimento. Utilize as cores j� criadas em cada objeto.

    CIRCULO c1= {200, 200, 60, 5, vermelho, 0};
    CIRCULO c2= {500, 300, 80, 3, azul};

    RETANGULO r1= {300, 400, 100, 100, 5, amarelo, 0};
    RETANGULO r2= {450, 450, 100, 100, 3, verde};

   while (true) {
//Explique o funcionamento do comando abaixo, considerando os seus par�metros.
//R: Se o mouse mexer, o retângulo deve acompanhar o mouse, sendo que o mouse deve estar no meio do reângulo. Se as teclas w a s d sejam clicadas, o retângulo deve ser movimentado.
      al_wait_for_event_timed(fEventos, &ev, 0.01);

      if (ev.type == ALLEGRO_EVENT_MOUSE_AXES){
           r2.x = ev.mouse.x - r2.largura / 2;
           r2.y = ev.mouse.y - r2.altura / 2;
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
//Complete as linhas abaixo para que um dos ret�ngulos criados
//seja movimentado pelas teclas A,D,W e S.
      if (teclas[0]==true) c1.cx -= 1;
      if (teclas[1]==true) c1.cx += 1;
      if (teclas[2]==true) c1.cy -= 1;
      if (teclas[3]==true) c1.cy += 1;

//Descreva TODAS as implementa��es que seriam necess�rias para que
//um dos c�rculos criados seja movimentado pelas teclas U, H, J e K
//R: Deveria ser feito condicionais se as teclas fossem clicadas, as respectivas teclas[0, 1, 2, 3] devem receber true. Se elas deixarem de ser clicadas, a condicional deve ser parada.

//Explique o que realiza o comando abaixo.
//R: Deixa a tela em branco.
      al_clear_to_color( al_map_rgb(255, 255, 250 ) );

//Insira os comandos adequados para que os objetos
//criados sejam mostrados na janela.
//(utilize as fun��es criadas no in�cio do programa)


    desenhaCirculo(c1);
    desenhaCirculo(c2);

    desenhaRetangulo(r1);
    desenhaRetangulo(r2);

    colideCirc(c1, c2);
    colideRet(r1, r2);

    colideRetCirc(r1, c1);

      al_flip_display();

   }

}
