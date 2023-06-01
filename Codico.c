import java.util.*;

class Bus {
    private String ruta;
    private List<String> paradas;

    public Bus(String ruta, List<String> paradas) {
        this.ruta = ruta;
        this.paradas = paradas;
    }

    public String getRuta() {
        return ruta;
    }

    public List<String> getParadas() {
        return paradas;
    }
}

public class ProgramaBuses {
    public static void main(String[] args) {
        List<Bus> buses = crearBuses();

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Seleccione una opción:");
            System.out.println("1. Consultar paradas de una ruta de bus");
            System.out.println("2. Consultar rutas de bus en días feriados");
            System.out.println("3. Salir");

            int opcion = scanner.nextInt();
            scanner.nextLine(); // Limpiar el buffer del scanner

            if (opcion == 1) {
                System.out.print("Ingrese el número de ruta del bus: ");
                String numeroRuta = scanner.nextLine();

                Bus bus = buscarBusPorRuta(buses, numeroRuta);
                if (bus != null) {
                    System.out.println("Paradas del bus " + bus.getRuta() + ":");
                    for (String parada : bus.getParadas()) {
                        System.out.println(parada);
                    }
                } else {
                    System.out.println("No se encontró la ruta del bus ingresada.");
                }
            } else if (opcion == 2) {
                System.out.println("Las rutas de bus en días feriados son:");
                for (Bus bus : buses) {
                    System.out.println(bus.getRuta());
                }
            } else if (opcion == 3) {
                System.out.println("¡Hasta luego!");
                break;
            } else {
                System.out.println("Opción inválida. Por favor, seleccione una opción válida.");
            }
        }
    }

    private static List<Bus> crearBuses() {
        List<Bus> buses = new ArrayList<>();

        // Crear rutas de buses y sus paradas
        List<String> paradasG43 = new ArrayList<>();
        paradasG43.add("Estación A");
        paradasG43.add("Estación B");
        paradasG43.add("Estación C");

        List<String> paradasFeriado1 = new ArrayList<>();
        paradasFeriado1.add("Estación X");
        paradasFeriado1.add("Estación Y");
        paradasFeriado1.add("Estación Z");
        
         List<String> paradasG42 = new ArrayList<>();
        paradasG42.add("Estación A");
        paradasG42.add("Estación B");
        paradasG42.add("Estación C");
        
        List<String> paradasFeriado2 = new ArrayList<>();
        paradasFeriado2.add("Estación X");
        paradasFeriado2.add("Estación Y");
        paradasFeriado2.add("Estación Z");
        
         List<String> paradasG44 = new ArrayList<>();
        paradasG44.add("Estación A");
        paradasG44.add("Estación B");
        paradasG44.add("Estación C");

        List<String> paradasFeriado3 = new ArrayList<>();
        paradasFeriado3.add("Estación X");
        paradasFeriado3.add("Estación Y");
        paradasFeriado3.add("Estación Z");
        
         List<String> paradasG45 = new ArrayList<>();
        paradasG44.add("Estación A");
        paradasG44.add("Estación B");
        paradasG44.add("Estación C");

        List<String> paradasFeriado4 = new ArrayList<>();
        paradasFeriado4.add("Estación X");
        paradasFeriado4.add("Estación Y");
        paradasFeriado4.add("Estación Z");
        
        
        // Agregar rutas de buses a la lista
        buses.add(new Bus("G43", paradasG43));
        buses.add(new Bus("Feriado1", paradasFeriado1));
        
        buses.add(new Bus("G42", paradasG42));
        buses.add(new Bus("Feriado2", paradasFeriado2));
        
        buses.add(new Bus("G44", paradasG44));
        buses.add(new Bus("Feriado3", paradasFeriado3));
        
        buses.add(new Bus("G45", paradasG45));
        buses.add(new Bus("Feriado4", paradasFeriado4));
        
 return buses;
       
    }

    private static Bus buscarBusPorRuta(List<Bus> buses, String numeroRuta) {
        for (Bus bus : buses) {
            if (bus.getRuta().equals(numeroRuta)) {
                return bus;
            }
        }
        return null;
    }
}
