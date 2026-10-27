// rea decompile_all
// name: FUN_005dcc7c
// address: 0x5dcc7c
// body: available
// range: 0x5dcc7c-0x5dce6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005dcc7c(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  undefined1 *local_30c;
  undefined1 local_305 [768];
  char local_5;

  if ((*(char *)(in_stack_00000004 + -0x7f) == '\x03') &&
     (cVar1 = FUN_00463224(*(undefined4 *)(in_stack_00000004 + -0x98)), cVar1 != '\x01')) {
    (**(code **)(**(int **)(in_stack_00000004 + -0x98) + 0x3c))
              (*(int **)(in_stack_00000004 + -0x98),*(undefined4 *)PTR_DAT_00688a98);
  }
  else {
    cVar1 = FUN_00463224(*(undefined4 *)(in_stack_00000004 + -0x98));
    if (cVar1 == '\x01') {
      uVar2 = FUN_005d5708(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x98) + 0x40),0);
      (**(code **)(**(int **)(in_stack_00000004 + -0x98) + 0x3c))
                (*(int **)(in_stack_00000004 + -0x98),uVar2);
    }
    else if (cVar1 == '\x02') {
      if (*(short *)(in_stack_00000004 + -0x3c) == 2) {
        uVar2 = FUN_005d5708(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x98) + 0x40),0);
        (**(code **)(**(int **)(in_stack_00000004 + -0x98) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x98),uVar2);
      }
      else {
        local_30c = (undefined1 *)(in_stack_00000004 + -0x70);
        uVar2 = FUN_005d51e0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x98) + 0x40),&local_30c,
                             0,0,0x10,0);
        (**(code **)(**(int **)(in_stack_00000004 + -0x98) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x98),uVar2);
      }
    }
    else if (cVar1 == '\x03') {
      FUN_0043c834(*(undefined4 *)(in_stack_00000004 + -0x9c));
      (**(code **)**(undefined4 **)(in_stack_00000004 + -0x9c))();
      FUN_0043c854(*(undefined4 *)(in_stack_00000004 + -0x9c));
      (**(code **)(**(int **)(in_stack_00000004 + -0x9c) + 0xc))
                (*(int **)(in_stack_00000004 + -0x9c),&local_5,1);
      if (local_5 == '\f') {
        (**(code **)(**(int **)(in_stack_00000004 + -0x9c) + 0xc))
                  (*(int **)(in_stack_00000004 + -0x9c),local_305,0x300);
        local_30c = local_305;
        uVar2 = FUN_005d51e0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x98) + 0x40),&local_30c,
                             0,0,0x100,0);
        (**(code **)(**(int **)(in_stack_00000004 + -0x98) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x98),uVar2);
      }
      else if (*(short *)(in_stack_00000004 + -0x3c) == 2) {
        uVar2 = FUN_005d5708(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x98) + 0x40),0);
        (**(code **)(**(int **)(in_stack_00000004 + -0x98) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x98),uVar2);
      }
      FUN_0043c854(*(undefined4 *)(in_stack_00000004 + -0x9c));
    }
  }
  return;
}
