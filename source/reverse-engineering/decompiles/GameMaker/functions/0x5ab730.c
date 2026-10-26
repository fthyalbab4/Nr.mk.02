// rea decompile_all
// name: FUN_005ab730
// address: 0x5ab730
// body: available
// range: 0x5ab730-0x5ab7c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab730(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  FUN_004f5748(param_1,param_2);
  if ((*(byte *)(param_1 + 7) & 0x40) == 0) {
    iVar2 = FUN_005ab6e4(param_1);
    iVar3 = (param_1[0xca] + -1) * iVar2 + 1;
    iVar1 = param_1[0xcb];
    iVar4 = (param_1[0x12] + -1) / iVar2;
    param_1[0xc9] = iVar4 + 1;
    iVar2 = iVar4 * iVar2 + 1;
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    iVar4 = param_1[0x13];
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
    if ((iVar2 != param_1[0x12]) || (iVar4 != param_1[0x13])) {
      (**(code **)(*param_1 + 0x98))
                (param_1,param_1[0x10],param_1[0x11],iVar4,iVar2,param_2,iVar3,iVar1);
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return;
}
