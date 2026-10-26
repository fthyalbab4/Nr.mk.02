// rea decompile_all
// name: FUN_00548640
// address: 0x548640
// body: available
// range: 0x548640-0x5486ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_00548640(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  char local_1c;
  undefined1 auStack_1b [11];

  uVar1 = FUN_0043f234(param_2);
  ppuVar3 = (undefined **)0x0;
  iVar2 = (**(code **)(*param_2 + 0xc))(param_2,&local_1c,1,uVar1);
  if (iVar2 == 1) {
    if (local_1c == '\n') {
      iVar2 = (**(code **)(*param_2 + 0xc))(param_2,auStack_1b,10);
      if (iVar2 == 10) {
        ppuVar3 = &PTR_FUN_00539798;
      }
    }
    else {
      if ((local_1c == '\v') &&
         (iVar2 = (**(code **)(*param_2 + 0xc))(param_2,auStack_1b,0xb), iVar2 == 0xb)) {
        uVar1 = FUN_005485f8();
        ppuVar3 = (undefined **)FUN_00548560(uVar1,auStack_1b);
        if (ppuVar3 != (undefined **)0x0) {
          return ppuVar3;
        }
        return &PTR_FUN_00539798;
      }
      FUN_0043f254(param_2);
      ppuVar3 = (undefined **)FUN_00547c10(param_1,param_2);
    }
  }
  return ppuVar3;
}
