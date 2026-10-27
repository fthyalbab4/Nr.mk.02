// rea decompile_all
// name: FUN_00629ab8
// address: 0x629ab8
// body: available
// range: 0x629ab8-0x629b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00629ab8(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  iVar2 = 0;
  do {
    if ((param_2 == 0) || (*(uint *)(param_2 + -4) <= param_3)) {
      thunk_FUN_00404478();
    }
    iVar1 = (**(code **)PTR_DAT_00781be8)();
    if (iVar1 < 1) {
      iVar1 = FUN_00629394(param_1,iVar1);
      if ((iVar1 != 2) && (iVar1 != 3)) {
        if (iVar1 == 6) {
          return 0;
        }
        return -1;
      }
    }
    else {
      bVar3 = SCARRY4(iVar2,iVar1);
      iVar2 = iVar2 + iVar1;
      if (bVar3) {
        iVar1 = FUN_00405944();
      }
      bVar3 = SCARRY4(param_3,iVar1);
      param_3 = param_3 + iVar1;
      if (bVar3) {
        iVar1 = FUN_00405944();
      }
      bVar3 = SBORROW4(param_4,iVar1);
      param_4 = param_4 - iVar1;
      if (bVar3) {
        FUN_00405944();
      }
    }
    if (param_4 < 1) {
      return iVar2;
    }
  } while( true );
}
