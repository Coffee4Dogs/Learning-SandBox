/**
 * Código en JavaScript para mover la posición del fondo del cuerpo del documento
 * según la posición del ratón en la ventana.
 */

window.addEventListener("mousemove", ChicasSuperPoderosas);

function ChicasSuperPoderosas(parametro) { //Funcion
    var x = parametro.clientX / window.innerWidth; //calcula la posición horizontal del puntero del ratón en relación
    var y = parametro.clientY / window.innerHeight; //con el ancho de la ventana del navegador, normalizándola en un rango de 0 a 1.
    var bgPosX = x * 50; //se realizan algunos cálculos adicionales para 
    var bgPosY = y * 50; //determinar las posiciones de fondo ( bgPosX  y  bgPosY ).
    document.body.style.backgroundPosition = bgPosX + "% " + bgPosY + "%";
}