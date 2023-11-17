#include <stdio.h>

// Estructura para representar un estudiante
typedef struct {
    char nombre[50];
    int id;
    float notas[5]; // Suponemos que hay 5 materias
} Estudiante;

// Función para calcular el promedio de notas de un estudiante
float calcularPromedio(const Estudiante* estudiante) {
    float suma = 0.0;
    for (int i = 0; i < 5; ++i) {
        suma += estudiante->notas[i];
    }
    return suma / 5.0;
}

// Función para mostrar las notas de un estudiante
void mostrarNotas(const Estudiante* estudiante) {
    printf("Notas de %s (ID: %d):\n", estudiante->nombre, estudiante->id);
    for (int i = 0; i < 5; ++i) {
        printf("Materia %d: %.2f\n", i + 1, estudiante->notas[i]);
    }
}

int main() {
    // Crear tres estudiantes
    Estudiante estudiantes[3] = {
        {"Estudiante1", 1, {80, 75, 90, 85, 88}},
        {"Estudiante2", 2, {92, 88, 78, 95, 87}},
        {"Estudiante3", 3, {70, 65, 80, 75, 78}}
    };

    // Simular la consulta de notas y promedio para un estudiante
    int idEstudianteConsultar;
    printf("Ingrese el ID del estudiante para consultar notas y promedio: ");
    scanf("%d", &idEstudianteConsultar);

    // Buscar al estudiante por ID
    Estudiante* estudianteConsultado = NULL;
    for (int i = 0; i < 3; ++i) {
        if (estudiantes[i].id == idEstudianteConsultar) {
            estudianteConsultado = &estudiantes[i];
            break;
        }
    }

    // Verificar si se encontró al estudiante
    if (estudianteConsultado != NULL) {
        // Mostrar las notas y promedio
        mostrarNotas(estudianteConsultado);
        printf("Promedio: %.2f\n", calcularPromedio(estudianteConsultado));
    } else {
        printf("Estudiante no encontrado.\n");
    }

    return 0;
}

