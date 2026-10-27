// rea decompile_all
// name: FUN_005c4b00
// address: 0x5c4b00
// body: available
// range: 0x5c4b00-0x5c4c01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4b00(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar1 = FUN_00409a18(*param_1);
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    bVar4 = true;
    iVar3 = iVar1;
    do {
      FUN_00408640(*(undefined4 *)(*param_1 + iVar2 * 0xc),param_3);
      if ((bVar4) && (FUN_00408640(*(undefined4 *)(*param_1 + 4 + iVar2 * 0xc),param_4), bVar4)) {
        if (param_2 != 0) {
          *(int *)(*param_1 + 8 + iVar2 * 0xc) = param_2;
          return;
        }
        if (iVar2 <= iVar1 + -2) {
          iVar3 = ((iVar1 + -2) - iVar2) + 1;
          do {
            FUN_00409084(*param_1 + iVar2 * 0xc,*param_1 + 0xc + iVar2 * 0xc,&DAT_005c212c);
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        FUN_00409be0(param_1,&DAT_005c21a0,1,iVar1 + -1);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
      bVar4 = iVar3 == 0;
    } while (!bVar4);
  }
  FUN_00409be0(param_1,&DAT_005c21a0,1,iVar1 + 1);
  FUN_00407eb8(*param_1 + iVar1 * 0xc,param_3);
  *(int *)(*param_1 + 8 + iVar1 * 0xc) = param_2;
  FUN_00407eb8(*param_1 + 4 + iVar1 * 0xc,param_4);
  return;
}
