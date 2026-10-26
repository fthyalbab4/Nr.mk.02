// rea decompile_all
// name: FUN_0046ee20
// address: 0x46ee20
// body: available
// range: 0x46ee20-0x46f13f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046ee20(uint param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  iVar3 = FUN_0040bfac();
  if (param_1 == *(uint *)(iVar3 + 0x18)) {
    iVar3 = FUN_0040bfac();
    *param_2 = *(undefined2 *)(iVar3 + 0x1c);
    iVar3 = FUN_0040bfac();
    *param_3 = *(undefined2 *)(iVar3 + 0x1e);
    iVar3 = FUN_0040bfac();
    *param_4 = *(undefined2 *)(iVar3 + 0x20);
  }
  else {
    uVar5 = param_1 & 0xff;
    uVar6 = param_1 >> 8 & 0xff;
    uVar1 = (ushort)(param_1 >> 0x10) & 0xff;
    uVar4 = uVar6;
    if (uVar6 < uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 <= uVar1) {
      uVar4 = (uint)uVar1;
    }
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if (uVar1 <= uVar5) {
      uVar5 = (uint)uVar1;
    }
    uVar2 = FUN_004048c4();
    *param_3 = uVar2;
    if ((double)uVar4 == (double)uVar5) {
      *param_2 = 0xa0;
      *param_4 = 0;
    }
    else {
      FUN_004048c4();
      FUN_004048c4();
      FUN_004048c4();
      uVar2 = FUN_004048b8();
      *param_2 = uVar2;
      uVar2 = FUN_004048c4();
      *param_4 = uVar2;
    }
    iVar3 = FUN_0040bfac();
    *(uint *)(iVar3 + 0x18) = param_1;
    iVar3 = FUN_0040bfac();
    *(undefined2 *)(iVar3 + 0x1c) = *param_2;
    iVar3 = FUN_0040bfac();
    *(undefined2 *)(iVar3 + 0x1e) = *param_3;
    iVar3 = FUN_0040bfac();
    *(undefined2 *)(iVar3 + 0x20) = *param_4;
  }
  return;
}
