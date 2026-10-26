// rea decompile_all
// name: FUN_004e0540
// address: 0x4e0540
// body: available
// range: 0x4e0540-0x4e05d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004e0540(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;

  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar3 = extraout_DL;
  }
  FUN_004be9cc(param_1,0);
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x20000;
  uVar2 = FUN_004df9a4(&PTR_FUN_004d83f4,1,param_1,0);
  *(undefined4 *)(param_1 + 0x278) = uVar2;
  uVar2 = FUN_004df9a4(&PTR_FUN_004d83f4,1,param_1,1);
  *(undefined4 *)(param_1 + 0x288) = uVar2;
  *(undefined1 *)(param_1 + 0x274) = 0;
  iVar1 = *(int *)(param_1 + 0xac);
  *(undefined1 *)(iVar1 + 0x10) = 0x12;
  *(undefined1 *)(iVar1 + 0x11) = 0x17;
  if (cVar3 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_1c;
  }
  return param_1;
}
