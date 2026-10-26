// rea decompile_all
// name: FUN_006747fc
// address: 0x6747fc
// body: available
// range: 0x6747fc-0x674875 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006747fc(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;

  if ((param_2 != (char)param_1[0xc]) ||
     ((param_1[0x11] != 0 && (param_2 != *(char *)(param_1[0x11] + 0x59))))) {
    *(char *)(param_1 + 0xc) = param_2;
    iVar1 = param_1[0x11];
    if ((iVar1 != 0) && (param_2 != *(char *)(iVar1 + 0x59))) {
      FUN_004ee5c0(iVar1,(char)param_1[0xc]);
    }
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      if (param_2 != *(char *)(iVar1 + 0x59)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x34);
        cVar3 = FUN_00405c98(uVar2,&LAB_0066f320);
        if (cVar3 == '\0') {
          FUN_004ee5c0(iVar1,(char)param_1[0xc]);
        }
        else {
          FUN_004ee5c0(uVar2,0);
        }
      }
      if ((*(byte *)(param_1[3] + 0x1c) & 0x10) == 0) {
        (**(code **)(*param_1 + 0x30))();
      }
    }
  }
  return;
}
