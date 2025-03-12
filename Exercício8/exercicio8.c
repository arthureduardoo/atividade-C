/*
 * a) O que a função free faz?
 * - Libera a memória alocada dinamicamente com malloc ou calloc.
 *
 * b) Após free, o ponteiro pode ser usado?
 * - Não deve ser usado. É recomendado definir o ponteiro como NULL.
 *
 * c) O que causa vazamentos de memória?
 * - Esquecer de liberar memória com free após usá-la.
 *
 * d) O que malloc retorna se não conseguir alocar memória?
 * - Retorna NULL.
 *
 * e) O que faz a instrução calloc?
 * - Aloca memória e inicializa os blocos com 0.
 *
 * f) Diferença entre malloc e calloc:
 * - malloc não inicializa a memória.
 * - calloc inicializa todos os blocos com 0.
 */
