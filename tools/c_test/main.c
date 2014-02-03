#include <mruby.h>
#include <mruby/irep.h>
#include <stdlib.h>

extern const uint8_t mrb_main_irep[];

int main() {
  mrb_state* mrb = mrb_open();
  mrb_load_irep(mrb, mrb_main_irep);
  mrb_close(mrb);
  return EXIT_SUCCESS;
}
