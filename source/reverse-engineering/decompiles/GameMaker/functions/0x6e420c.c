// rea decompile_all
// name: FUN_006e420c
// address: 0x6e420c
// body: available
// range: 0x6e420c-0x6e4280 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e420c(int param_1,undefined4 param_2,int param_3,undefined1 *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;

  *param_4 = 0;
  if (DAT_0079010c == 0) {
    FUN_004eef94(*(undefined4 *)(param_1 + 0x5b4),0);
    return;
  }
  if (*(int *)(param_1 + 0x5b4) != param_3) {
    return;
  }
  iVar2 = FUN_004b02f8(*(int *)(param_1 + 0x5b4),param_7,param_6);
  if (iVar2 == 0) {
    return;
  }
  if (iVar2 != DAT_0079010c) {
    iVar3 = FUN_0071cde4(DAT_0079010c);
    iVar2 = FUN_0071cde4(iVar2);
    if (iVar3 == iVar2) {
      uVar1 = 1;
      goto LAB_006e4277;
    }
  }
  uVar1 = 0;
LAB_006e4277:
  *param_4 = uVar1;
  return;
}
