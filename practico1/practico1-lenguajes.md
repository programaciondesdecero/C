

4) Dado `Σ = {a, b}`, usar concatenación de lenguajes para definir el lenguaje formado por:

- las cadenas que contienen al menos dos `b`'s seguidas:

L<sub>1</sub> = {(bb)*}

L<sub>2</sub> = {a}

L<sub>1</sub>.L<sub>2</sub> = {(bb)*a}

- las cadenas que no empiezan con una `a`:

L<sub>1</sub> = {b*}

L<sub>2</sub> = {(a + b)*}

L<sub>1</sub>.L<sub>2</sub> = {b\*(a + b)\*}

- las cadenas que contienen una y solo una `a`:

L<sub>1</sub> = {a}

L<sub>2</sub> = {λ}

L<sub>1</sub>.L<sub>2</sub> = {a}.{λ} = {a}
