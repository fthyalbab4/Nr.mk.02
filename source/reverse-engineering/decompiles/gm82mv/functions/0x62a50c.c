// rea decompile_all
// name: FUN_0062a50c
// address: 0x62a50c
// body: available
// range: 0x62a50c-0x62a56d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0062a50c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStack_181c [1541];

  bVar3 = 0;
  uVar1 = 0;
  if (DAT_006887dc != 0) {
    DAT_00883550 = 0;
    FUN_00404f38(auStack_181c + 0x5f1,0x50,0);
    auStack_181c[0x5f1] = 0x50;
    puVar2 = (undefined4 *)(PTR_DAT_00689464 + (uint)bVar3 * -8 + 4);
    auStack_181c[0x5f7] = *(undefined4 *)PTR_DAT_00689464;
    auStack_181c[(uint)bVar3 * -2 + 0x5f8] = *puVar2;
    auStack_181c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9] = puVar2[(uint)bVar3 * -2 + 1];
    (auStack_181c + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9)[(uint)bVar3 * -2 + 1] =
         (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
    (**(code **)(*DAT_006887e4 + 0x34))();
    uVar1 = DAT_00883550;
  }
  return uVar1;
}
