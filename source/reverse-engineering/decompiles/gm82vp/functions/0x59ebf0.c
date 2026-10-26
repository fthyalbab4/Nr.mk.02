// rea decompile_all
// name: FUN_0059ebf0
// address: 0x59ebf0
// body: available
// range: 0x59ebf0-0x59ec5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0059ebf0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_2 >> ((byte)*(undefined2 *)(param_1 + 0xc) & 0x1f);
  if ((ushort)uVar3 < *(ushort *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 4);
  }
  else {
    iVar1 = FUN_0059ea78(*(undefined4 *)(param_1 + 4),param_1 + 8,uVar3 + 1);
  }
  *(int *)(param_1 + 4) = iVar1;
  iVar2 = *(int *)(iVar1 + (uVar3 & 0xffff) * 4);
  if (iVar2 == 0) {
    iVar2 = FUN_0059eab8(uVar3 & 0xffff,*(undefined2 *)(param_1 + 0x14));
    *(int *)(iVar1 + (uVar3 & 0xffff) * 4) = iVar2;
  }
  if (*(int *)(param_1 + 0x10) < (int)param_2) {
    *(uint *)(param_1 + 0x10) = param_2;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return iVar2 + (*(ushort *)(param_1 + 10) & param_2) * 4;
}
