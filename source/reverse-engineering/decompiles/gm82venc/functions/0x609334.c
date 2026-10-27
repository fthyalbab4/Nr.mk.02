// rea decompile_all
// name: FUN_00609334
// address: 0x609334
// body: available
// range: 0x609334-0x609402 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00609334(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  uVar3 = FUN_00571ea8();
  FUN_00409dfc(param_1 + 0x80,&DAT_006081c4,1,uVar3);
  uVar3 = FUN_00571ea8();
  FUN_00409dfc(param_1 + 0x84,&DAT_006081f4,1,uVar3);
  iVar5 = *(int *)(param_2 + 0xcc);
  while( true ) {
    if (iVar5 < 0) {
      return;
    }
    iVar6 = FUN_00571ea8();
    if (iVar6 <= iVar5) break;
    cVar2 = FUN_00571eb0(iVar5);
    if (cVar2 == '\0') {
      return;
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x84) + iVar5 * 4);
    *piVar1 = *piVar1 + 1;
    iVar4 = FUN_00409c34(*(undefined4 *)(*(int *)(param_1 + 0x80) + iVar5 * 4));
    iVar6 = *(int *)(*(int *)(param_1 + 0x84) + iVar5 * 4);
    if (iVar4 < iVar6) {
      FUN_00409dfc(*(int *)(param_1 + 0x80) + iVar5 * 4,&DAT_00608194,1,iVar6 + 5);
    }
    *(int *)(*(int *)(*(int *)(param_1 + 0x80) + iVar5 * 4) + -4 +
            *(int *)(*(int *)(param_1 + 0x84) + iVar5 * 4) * 4) = param_2;
    iVar5 = FUN_00571fac(iVar5);
    iVar5 = *(int *)(iVar5 + 0x14);
  }
  return;
}
