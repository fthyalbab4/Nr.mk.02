// rea decompile_all
// name: FUN_004dd2c4
// address: 0x4dd2c4
// body: available
// range: 0x4dd2c4-0x4dd40b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004dd2c4(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_18;
  int local_14;

  local_18 = 0;
  if ((param_2 != '\0') ||
     (((*(byte *)(param_1 + 0x1c) & 0x10) == 0 && (cVar1 = FUN_004dd470(param_1), cVar1 != '\0'))))
  {
    local_14 = 0;
    iVar5 = 0;
    iVar4 = 0;
    iVar2 = FUN_004dbe08(param_1);
    iVar3 = local_14;
    if (-1 < iVar2 + -1) {
      do {
        iVar3 = FUN_004dbe18(param_1,iVar4);
        if (*(char *)(iVar3 + 0x3e) != '\0') {
          FUN_004dbe18(param_1,iVar4);
          cVar1 = FUN_004dd02c();
          iVar3 = iVar4;
          if (cVar1 == '\0') break;
          iVar3 = FUN_004dbe18(param_1,iVar4);
          *(undefined1 *)(iVar3 + 0x3e) = 0;
          local_18 = 1;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
        iVar3 = local_14;
      } while (iVar2 != 0);
    }
    local_14 = iVar3;
    iVar4 = FUN_004dbe08(param_1);
    if (local_14 <= iVar4 + -1) {
      iVar3 = ((iVar4 + -1) - local_14) + 1;
      iVar4 = local_14;
      do {
        FUN_004dbe18(param_1,iVar4);
        cVar1 = FUN_004dd02c();
        if (cVar1 == '\0') {
          iVar2 = FUN_004dbe18(param_1,iVar4);
          if (*(char *)(iVar2 + 0x3e) != '\0') {
            if ((iVar5 != 0) && (*(char *)(iVar5 + 0x3e) == '\0')) {
              *(undefined1 *)(iVar5 + 0x3e) = 1;
              local_18 = 1;
            }
            iVar5 = 0;
            local_14 = iVar4;
          }
        }
        else {
          if ((iVar5 != 0) && (*(char *)(iVar5 + 0x3e) != '\0')) {
            *(undefined1 *)(iVar5 + 0x3e) = 0;
            local_18 = 1;
          }
          iVar5 = FUN_004dbe18(param_1,iVar4);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar4 = FUN_004dbe08(param_1);
    iVar4 = iVar4 + -1;
    if (local_14 - iVar4 == 0 || local_14 < iVar4) {
      iVar3 = (local_14 - iVar4) + -1;
      do {
        iVar2 = FUN_004dbe18(param_1,iVar4);
        if (*(char *)(iVar2 + 0x3e) != '\0') {
          FUN_004dbe18(param_1,iVar4);
          cVar1 = FUN_004dd02c();
          if (cVar1 == '\0') {
            return local_18;
          }
          iVar2 = FUN_004dbe18(param_1,iVar4);
          *(undefined1 *)(iVar2 + 0x3e) = 0;
          local_18 = 1;
        }
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
    }
  }
  return local_18;
}
