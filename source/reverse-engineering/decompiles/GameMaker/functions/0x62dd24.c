// rea decompile_all
// name: FUN_0062dd24
// address: 0x62dd24
// body: available
// range: 0x62dd24-0x62dea5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062dd24(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;

  local_3c = *param_5;
  local_38 = param_5[1];
  local_34 = param_5[2];
  local_30 = param_5[3];
  if (local_3c < 0) {
    local_3c = 0;
  }
  if (local_38 < 0) {
    local_38 = 0;
  }
  iVar4 = FUN_0062db94(param_1);
  if (iVar4 < local_34) {
    local_34 = FUN_0062db94(param_1);
  }
  iVar4 = FUN_0062db9c(param_1);
  if (iVar4 < local_30) {
    local_30 = FUN_0062db9c(param_1);
  }
  FUN_00410538();
  FUN_00410538();
  FUN_00410538();
  FUN_00410538();
  uVar1 = FUN_00410538();
  uVar2 = FUN_00410538();
  uVar3 = FUN_00410538();
  local_34 = local_34 - local_3c;
  local_30 = local_30 - local_38;
  uVar6 = 1;
  uVar5 = FUN_00410538();
  FUN_00703cd8(*(undefined4 *)(param_1 + 4),param_2,uVar5,uVar6,local_30,local_34,local_38,local_3c,
               uVar3,uVar2,uVar1);
  return;
}
