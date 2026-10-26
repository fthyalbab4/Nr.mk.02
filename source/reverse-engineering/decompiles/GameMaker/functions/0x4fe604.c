// rea decompile_all
// name: FUN_004fe604
// address: 0x4fe604
// body: available
// range: 0x4fe604-0x4fe6a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fe604(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  iVar5 = *param_2;
  iVar1 = param_2[1];
  iVar7 = param_2[2];
  iVar2 = param_2[3];
  FUN_004fe4b0(param_1);
  FUN_004edcac(param_1,iVar2);
  uVar6 = iVar7 - iVar5;
  iVar7 = (int)uVar6 >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((uVar6 & 1) != 0);
  }
  iVar4 = (int)*(uint *)(param_1 + 0x48) >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((*(uint *)(param_1 + 0x48) & 1) != 0);
  }
  FUN_004edc78(param_1,(iVar7 + iVar5) - iVar4);
  if (*(char *)(*(int *)(param_1 + 0x278) + 0x44) == '\x01') {
    FUN_004edc78(param_1,*(int *)(param_1 + 0x40) + 10);
  }
  uVar6 = FUN_0051c614(*(undefined4 *)PTR_DAT_007828e0);
  iVar5 = (int)uVar6 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar6 & 1) != 0);
  }
  bVar3 = iVar5 < *(int *)(param_1 + 0x44);
  *(bool *)(param_1 + 0x27c) = bVar3;
  if (bVar3) {
    FUN_004edcac(param_1,(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x4c)) - (iVar2 - iVar1));
  }
  return;
}
