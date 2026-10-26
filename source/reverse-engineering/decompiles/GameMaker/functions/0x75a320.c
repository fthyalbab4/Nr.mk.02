// rea decompile_all
// name: FUN_0075a320
// address: 0x75a320
// body: available
// range: 0x75a320-0x75a425 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0075a320(int param_1,uint param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  uint local_14;

  local_18 = FUN_0075a4a8(param_1,param_2);
  iVar2 = 0;
  *param_3 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    local_20 = FUN_0075a428(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x11));
    uVar3 = 0;
    local_14 = 0;
    while (cVar1 = FUN_0075a6e0(param_1,&local_20,&local_1c), cVar1 != '\0') {
      uVar3 = uVar3 + local_1c;
      if (param_2 < uVar3) {
        if (local_18 <= local_14) {
          return iVar2;
        }
        *param_3 = 0;
        return 0;
      }
      local_14 = uVar3;
      FUN_0075a6e0(param_1,&local_20,&local_1c);
      iVar2 = iVar2 + local_1c;
      *param_3 = param_2 - uVar3;
    }
  }
  else {
    FUN_00759fd0(param_1);
    local_1c = FUN_00409a18(*(undefined4 *)(param_1 + 0x10));
    local_1c = local_1c + -1;
    if (-1 < local_1c) {
      do {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 4 + local_1c * 0xc);
        if (uVar3 <= param_2) {
          if (uVar3 < local_18) {
            return 0;
          }
          iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8 + local_1c * 0xc);
          *param_3 = param_2 - *(int *)(*(int *)(param_1 + 0x10) + 4 + local_1c * 0xc);
          return iVar2;
        }
        local_1c = local_1c + -1;
      } while (local_1c != -1);
    }
  }
  return iVar2;
}
