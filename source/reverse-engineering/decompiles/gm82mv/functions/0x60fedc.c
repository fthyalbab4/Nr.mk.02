// rea decompile_all
// name: FUN_0060fedc
// address: 0x60fedc
// body: available
// range: 0x60fedc-0x60ff72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0060fedc(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  uVar1 = 0;
  FUN_0060fea4(param_1);
  iVar2 = FUN_0050bbe0(param_2);
  if (iVar2 == 400) {
    iVar2 = FUN_0050bbe0(param_2);
    if (-1 < iVar2 + -1) {
      do {
        iVar3 = FUN_00409c34(*(undefined4 *)(param_1 + 4));
        if (iVar3 <= *(int *)(param_1 + 8)) {
          FUN_00409dfc(param_1 + 4,&DAT_0060fb58,1,*(int *)(param_1 + 8) + 5);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        uVar4 = FUN_006103d0(&LAB_00610078,1,0);
        *(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4) = uVar4;
        FUN_006104d0(*(undefined4 *)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 4),param_2
                    );
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}
