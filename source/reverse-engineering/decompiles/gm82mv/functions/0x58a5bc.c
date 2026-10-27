// rea decompile_all
// name: FUN_0058a5bc
// address: 0x58a5bc
// body: available
// range: 0x58a5bc-0x58a680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058a5bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;

  if (*(int *)PTR_DAT_00688c4c == -1) {
    iVar4 = FUN_00581c30(param_3);
    if (iVar4 != 0) {
      iVar5 = FUN_005815a0(iVar4,param_4);
      if (iVar5 != 0) {
        uVar1 = *(undefined4 *)PTR_DAT_00689034;
        uVar2 = *(undefined4 *)PTR_DAT_006894f4;
        uVar3 = *(undefined4 *)PTR_DAT_00688bb0;
        *(undefined4 *)PTR_DAT_00689034 = param_3;
        *(undefined4 *)PTR_DAT_006894f4 = 100000;
        uVar6 = FUN_005815b4(iVar4,param_4);
        *(undefined4 *)PTR_DAT_00688bb0 = uVar6;
        for (iVar4 = 0; iVar4 < *(int *)(iVar5 + 8);
            iVar4 = FUN_0058a414(param_1,param_2,iVar5,iVar4)) {
        }
        *(undefined4 *)PTR_DAT_00689034 = uVar1;
        *(undefined4 *)PTR_DAT_006894f4 = uVar2;
        *(undefined4 *)PTR_DAT_00688bb0 = uVar3;
      }
    }
  }
  return;
}
