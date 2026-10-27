// rea decompile_all
// name: FUN_0056555c
// address: 0x56555c
// body: available
// range: 0x56555c-0x5658b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056555c(undefined4 param_1,char param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 fVar4;
  double in_stack_0000001c;
  double in_stack_00000024;
  double in_stack_00000034;
  double in_stack_0000003c;
  double local_84c [129];
  double local_444 [129];
  int local_38;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  undefined1 local_11;
  int local_10;
  char local_9;
  undefined4 local_8;

  local_10 = param_3;
  local_9 = param_2;
  local_8 = param_1;
  local_11 = FUN_0061ed18();
  FUN_0061ecac(1);
  if (local_10 < 3) {
    local_10 = 3;
  }
  if (0x80 < local_10) {
    local_10 = 0x80;
  }
  if (-1 < local_10) {
    local_38 = local_10 + 1;
    pdVar1 = local_444;
    pdVar2 = local_84c;
    do {
      fVar4 = in_ST5;
      FUN_00404864();
      *pdVar1 = (double)in_ST0;
      in_ST0 = in_ST2;
      in_ST2 = in_ST4;
      in_ST4 = fVar4;
      FUN_00404874();
      *pdVar2 = (double)in_ST1;
      pdVar2 = pdVar2 + 1;
      pdVar1 = pdVar1 + 1;
      local_38 = local_38 + -1;
      in_ST1 = in_ST3;
      in_ST3 = in_ST5;
      in_ST5 = fVar4;
    } while (local_38 != 0);
  }
  local_1c = (in_stack_00000024 + in_stack_0000003c) / 2.0;
  local_24 = (in_stack_0000001c + in_stack_00000034) / 2.0;
  local_2c = (in_stack_00000024 - in_stack_0000003c) / 2.0;
  local_34 = (in_stack_0000001c - in_stack_00000034) / 2.0;
  if (local_9 != '\0') {
    FUN_0056497c(6,local_8);
    FUN_00564dac();
    if (-1 < local_10) {
      local_38 = local_10 + 1;
      do {
        FUN_00564dac();
        local_38 = local_38 + -1;
      } while (local_38 != 0);
    }
    FUN_00564f30();
  }
  FUN_0056497c(5,local_8);
  if (-1 < local_10) {
    local_38 = local_10 + 1;
    do {
      FUN_00564dac();
      FUN_00564dac();
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  FUN_00564f30();
  if (local_9 != '\0') {
    FUN_0056497c(6,local_8);
    FUN_00564dac();
    iVar3 = local_10;
    if (-1 < local_10) {
      do {
        FUN_00564dac();
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    FUN_00564f30();
  }
  FUN_0061ecac(local_11);
  return;
}
