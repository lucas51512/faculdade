<?php

if(isset($_POST['email']) && !empty($_POST['email'])){

    $nome = addslashes($_POST['nome']);
    $email = addslashes($_POST['email']);
    $celular = addslashes($_POST['celular']);

    $to = "lucasbrancalhao454@gmail.com";
    $subject = "Formulario - Faça Parte";
    $body = "Nome: " .$nome. "\r\n" .
            "Email: " .$email. "\r\n" .
            "Numero de Celular: " .$celular;
    $header = "From: " .$email. "\r\n" 
    ."Reply-To ".$email."\r\n" 
    ."x=Mailer:PHP/".phpversion();

    if(mail($to, $subject, $body, $header)){
        echo("Email enviado com sucesso!");
    }else{
        echo("O email nao pode ser enviado");
    }
}
?>