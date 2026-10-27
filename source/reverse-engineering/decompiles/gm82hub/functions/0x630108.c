// rea decompile_all
// name: FUN_00630108
// address: 0x630108
// body: available
// range: 0x630108-0x6301ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00630108(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;

  if (DAT_00688810 < 0) {
    DAT_00688810 = FUN_0058d51c();
  }
  iVar1 = FUN_004048b8();
  if ((int)(&DAT_00883594)[iVar1] < 0) {
    iVar1 = FUN_004048b8();
    puVar5 = &DAT_00883594 + iVar1;
    uVar2 = FUN_0058b9cc();
    *puVar5 = uVar2;
  }
  iVar1 = FUN_004048b8();
  uVar2 = (&DAT_00883594)[iVar1];
  uVar3 = FUN_004048b8();
  FUN_0058bc80(uVar2,uVar3);
  uVar6 = 0;
  uVar4 = 0;
  uVar3 = FUN_004048b8();
  FUN_0058bcb8(uVar2,uVar3,1,uVar4,uVar6);
  FUN_0058bd10(uVar2);
  return;
}
