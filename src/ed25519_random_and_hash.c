/**
 * @package   noise-c.wasm
 * @author    Nazar Mokrynskyi <nazar@mokrynskyi.com>
 * @copyright Copyright (c) 2017, Nazar Mokrynskyi
 * @license   MIT License, see license.txt
 */
#include <stddef.h>

void noise_rand_bytes(void *bytes, size_t size);

void ed25519_randombytes_unsafe(void *out, size_t count) {
	noise_rand_bytes(out, count);
}
