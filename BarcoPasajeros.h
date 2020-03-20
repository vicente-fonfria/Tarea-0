#ifndef BarcoPasajeros
#define BarcoPasajeros
class BarcoPasajeros
 {    
     private:  
     int cantPasajeros;  //field or data member     
     TipoTamanio tamanio; //field or data member  

     public:
     
     void arribar(float cargaDespacho); //los barcos de pasajeros no poseen carga, no se realizan cambios
 };
 #endif
