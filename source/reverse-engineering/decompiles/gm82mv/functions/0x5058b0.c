// rea decompile_all
// name: FUN_005058b0
// address: 0x5058b0
// body: available
// range: 0x5058b0-0x50596d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005058b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;

  uVar2 = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (param_2 == -1) {
      param_2 = 6;
    }
    if ((((param_2 < 0) || (9 < param_2)) || (param_3 < 0)) || (2 < param_3)) {
      uVar2 = 0xfffffffe;
    }
    else {
      if (((&PTR_FUN_00681e68)[param_2 * 3] != (&PTR_FUN_00681e68)[*(int *)(iVar1 + 0x7c) * 3]) &&
         (*(int *)(param_1 + 8) != 0)) {
        uVar2 = FUN_005059ec(param_1,1);
      }
      if (param_2 != *(int *)(iVar1 + 0x7c)) {
        *(int *)(iVar1 + 0x7c) = param_2;
        *(uint *)(iVar1 + 0x78) = (uint)*(ushort *)(&DAT_00681e62 + param_2 * 0xc);
        *(uint *)(iVar1 + 0x84) = (uint)*(ushort *)(&DAT_00681e60 + param_2 * 0xc);
        *(uint *)(iVar1 + 0x88) = (uint)*(ushort *)(&DAT_00681e64 + param_2 * 0xc);
        *(uint *)(iVar1 + 0x74) = (uint)*(ushort *)(&DAT_00681e66 + param_2 * 0xc);
      }
      *(int *)(iVar1 + 0x80) = param_3;
    }
  }
  return uVar2;
}
