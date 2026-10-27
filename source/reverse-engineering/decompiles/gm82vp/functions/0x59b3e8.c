// rea decompile_all
// name: FUN_0059b3e8
// address: 0x59b3e8
// body: available
// range: 0x59b3e8-0x59b535 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0059b3e8(uint param_1)

{
  uint uVar1;
  int iVar2;
  int local_84;
  int local_80;
  undefined1 local_7c [4];
  int local_78;
  undefined4 local_60;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;

  local_8 = param_1;
  uVar1 = FUN_004c4988(param_1);
  if (((char)uVar1 != '\0') && (uVar1 = local_8, *(char *)(local_8 + 0x2c4) != '\0')) {
    FUN_005992f4(local_8,local_7c);
    local_18 = *(int *)(local_8 + 0x284) + -1;
    local_14 = *(int *)(local_8 + 0x2c0) + -1;
    FUN_00599528(local_8,&local_18,local_7c,&local_84);
    local_18 = local_84;
    local_14 = local_80;
    if ((*(char *)(local_8 + 0x2c4) == '\x01') || (*(char *)(local_8 + 0x2c4) == '\x03')) {
      if (*(int *)(local_8 + 0x284) == 1) {
        local_c = FUN_0059cbe8(local_8,local_60);
        local_10 = FUN_004baf44(local_8);
        local_10 = local_10 - local_78;
        iVar2 = *(int *)(local_8 + 0x2f8);
        if ((iVar2 < 1) || (local_10 <= local_c - iVar2)) {
          FUN_0059b368(0,iVar2);
        }
        else {
          FUN_0059aba8(local_8,0,4,1,local_c - local_10);
        }
      }
      else {
        iVar2 = MulDiv(*(int *)(local_8 + 0x2c8) - *(int *)(local_8 + 0x29c),0x7f,
                       local_84 - *(int *)(local_8 + 0x29c));
        FUN_0059b368(0,iVar2);
      }
    }
    uVar1 = (uint)(byte)(*(char *)(local_8 + 0x2c4) - 4);
    if ((byte)(*(char *)(local_8 + 0x2c4) - 2U) < 2) {
      iVar2 = MulDiv(*(int *)(local_8 + 0x2cc) - *(int *)(local_8 + 0x2a0),0x7f,
                     local_14 - *(int *)(local_8 + 0x2a0));
      uVar1 = FUN_0059b368(1,iVar2);
    }
  }
  return uVar1;
}
