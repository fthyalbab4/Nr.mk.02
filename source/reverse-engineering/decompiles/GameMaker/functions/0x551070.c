// rea decompile_all
// name: FUN_00551070
// address: 0x551070
// body: available
// range: 0x551070-0x55109c inclusive
// range: 0x55109f-0x55112e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00551070(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (*(int *)(param_1 + 0x14) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x1a4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xcc;
  }
  do {
    if (*(int *)(*(int *)(param_1 + 0x1a4) + 8) == 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
        uVar2 = 0xcd;
      }
      else {
        uVar2 = 0xce;
      }
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      return 1;
    }
    while (*(uint *)(param_1 + 0x8c) < *(uint *)(param_1 + 0x74)) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 4) = *(uint *)(param_1 + 0x8c);
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x74);
        (*(code *)**(undefined4 **)(param_1 + 8))();
      }
      iVar1 = *(int *)(param_1 + 0x8c);
      (**(code **)(*(int *)(param_1 + 0x1a8) + 4))(param_1,0,param_1 + 0x8c,0);
      if (iVar1 == *(int *)(param_1 + 0x8c)) {
        return 0;
      }
    }
    (**(code **)(*(int *)(param_1 + 0x1a4) + 4))();
    (*(code *)**(undefined4 **)(param_1 + 0x1a4))();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  } while( true );
}
