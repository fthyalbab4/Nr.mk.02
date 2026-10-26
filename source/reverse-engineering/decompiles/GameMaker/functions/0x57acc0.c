// rea decompile_all
// name: FUN_0057acc0
// address: 0x57acc0
// body: available
// range: 0x57acc0-0x57acec inclusive
// range: 0x57acef-0x57ad78 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0057acc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (*(int *)(param_1 + 0x10) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x196))();
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xcc;
  }
  do {
    if (*(int *)(*(int *)(param_1 + 0x196) + 8) == 0) {
      uVar2 = 0xce;
      if (*(int *)(param_1 + 0x40) == 0) {
        uVar2 = 0xcd;
      }
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      return 1;
    }
    while (*(uint *)(param_1 + 0x88) < *(uint *)(param_1 + 0x70)) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 4) = *(uint *)(param_1 + 0x88);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x70);
        (*(code *)**(undefined4 **)(param_1 + 8))();
      }
      iVar1 = *(int *)(param_1 + 0x88);
      (**(code **)(*(int *)(param_1 + 0x19a) + 4))(param_1,0,param_1 + 0x88,0);
      if (iVar1 == *(int *)(param_1 + 0x88)) {
        return 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x196) + 4))();
    (*(code *)**(undefined4 **)(param_1 + 0x196))();
    *(undefined4 *)(param_1 + 0x88) = 0;
  } while( true );
}
