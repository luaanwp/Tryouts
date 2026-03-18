<?php
$nome = $_POST['nome'];
$senha = $_POST['senha'];

$nome_correto = "luanl";
$senha_correta = "1234";

if ($nome === $nome_correto && $senha === $senha_correta) {
    header("Location: satisafactorymylove.htm?sucesso=1");
    exit;
} else {
    header("Location: satisafactory.htm?erro=1");
    exit;

}
?>