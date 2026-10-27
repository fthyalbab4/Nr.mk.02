// rea decompile_all
// name: FUN_005cddcc
// address: 0x5cddcc
// body: available
// range: 0x5cddcc-0x5cde92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005cddcc(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;

  if ((param_3 == 0) || (param_4 != 0x28)) {
    uVar1 = 0xfffffffa;
  }
  else {
    FUN_00408194(param_1 + 0x18,0);
    iVar2 = FUN_0040430c(0x18);
    *(int *)(param_1 + 0x1c) = iVar2;
    if (param_2 < 0) {
      param_2 = -param_2;
      *(undefined1 *)(iVar2 + 0xc) = 1;
    }
    if ((param_2 < 8) || (0xf < param_2)) {
      FUN_005cdd98(param_1);
      uVar1 = 0xfffffffe;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c);
      *(int *)(iVar2 + 0x10) = param_2;
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar1 = FUN_005cd188(param_1,&LAB_005cb6f0,1 << ((byte)param_2 & 0x1f));
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14) = uVar1;
      }
      else {
        uVar1 = FUN_005cd188(param_1,0,1 << ((byte)param_2 & 0x1f));
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14) = uVar1;
      }
      if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) == 0) {
        FUN_005cdd98(param_1);
        uVar1 = 0xfffffffc;
      }
      else {
        FUN_005cdd50(param_1);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
