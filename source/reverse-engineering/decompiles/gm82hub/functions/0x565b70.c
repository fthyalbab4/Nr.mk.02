// rea decompile_all
// name: FUN_00565b70
// address: 0x565b70
// body: available
// range: 0x565b70-0x565ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00565b70(undefined4 param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  float10 in_ST0;
  float10 fVar3;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 fVar4;
  float10 in_ST4;
  float10 in_ST5;
  double in_stack_00000014;
  double in_stack_0000001c;
  double in_stack_00000024;
  double in_stack_0000002c;
  double in_stack_00000034;
  double in_stack_0000003c;
  double local_884 [129];
  double local_47c [129];
  int local_74;
  int local_70;
  double local_6c;
  double local_64;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  int local_18;
  int local_14;
  undefined1 local_d;
  int local_c;
  undefined4 local_8;

  local_c = param_2;
  local_8 = param_1;
  local_d = FUN_0061ed18();
  FUN_0061ecac(1);
  if (local_c < 3) {
    local_c = 3;
  }
  if (0x80 < local_c) {
    local_c = 0x80;
  }
  if (-1 < local_c) {
    local_70 = local_c + 1;
    pdVar1 = local_47c;
    pdVar2 = local_884;
    fVar3 = in_ST1;
    fVar4 = in_ST3;
    do {
      in_ST3 = in_ST5;
      in_ST1 = fVar4;
      in_ST5 = in_ST3;
      FUN_00404864();
      *pdVar1 = (double)in_ST0;
      in_ST0 = in_ST2;
      in_ST2 = in_ST4;
      in_ST4 = in_ST5;
      FUN_00404874();
      *pdVar2 = (double)fVar3;
      pdVar2 = pdVar2 + 1;
      pdVar1 = pdVar1 + 1;
      local_70 = local_70 + -1;
      fVar3 = in_ST1;
      fVar4 = in_ST3;
    } while (local_70 != 0);
  }
  local_24 = (in_stack_00000024 + in_stack_0000003c) / 2.0;
  local_2c = (in_stack_0000001c + in_stack_00000034) / 2.0;
  local_34 = (in_stack_00000014 + in_stack_0000002c) / 2.0;
  local_3c = (in_stack_00000024 - in_stack_0000003c) / 2.0;
  local_44 = (in_stack_0000001c - in_stack_00000034) / 2.0;
  local_4c = (in_stack_00000014 - in_stack_0000002c) / 2.0;
  local_18 = (int)(local_c + 1U) >> 1;
  if (local_18 < 0) {
    local_18 = local_18 + (uint)((local_c + 1U & 1) != 0);
  }
  if (-1 < local_18 + -1) {
    local_14 = 0;
    local_70 = local_18;
    do {
      fVar3 = in_ST5;
      FUN_00404864();
      local_54 = (double)in_ST0;
      in_ST0 = in_ST4;
      fVar4 = fVar3;
      FUN_00404874();
      local_5c = (double)in_ST1;
      in_ST1 = in_ST5;
      in_ST4 = fVar4;
      FUN_00404864();
      local_64 = (double)in_ST2;
      in_ST2 = fVar3;
      in_ST5 = in_ST4;
      FUN_00404874();
      local_6c = (double)in_ST3;
      FUN_0056497c(5,local_8);
      if (-1 < local_c) {
        local_74 = local_c + 1;
        do {
          FUN_00564dac();
          FUN_00564dac();
          local_74 = local_74 + -1;
        } while (local_74 != 0);
      }
      FUN_00564f30();
      local_14 = local_14 + 1;
      local_70 = local_70 + -1;
      in_ST3 = fVar4;
    } while (local_70 != 0);
  }
  FUN_0061ecac(local_d);
  return;
}
