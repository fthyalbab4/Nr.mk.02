// rea decompile_all
// name: FUN_005373d0
// address: 0x5373d0
// body: available
// range: 0x5373d0-0x537400 inclusive
// range: 0x537445-0x5374ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005373d0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *in_stack_00000004;
  int in_stack_0000000c;

  uVar1 = 0;
  FUN_005372ec();
  uVar2 = *(undefined1 *)(in_stack_0000000c + 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 2:
  case 3:
  case 0xb:
  case 0x10:
    uVar2 = uVar1;
    break;
  case 4:
    break;
  case 5:
  case 7:
    break;
  case 6:
    break;
  case 8:
    if ((BSTR)*in_stack_00000004 != (BSTR)0x0) {
      SysFreeString((BSTR)*in_stack_00000004);
    }
    *in_stack_00000004 = 0;
    uVar2 = uVar1;
    break;
  case 9:
  case 0xd:
    if ((int *)*in_stack_00000004 != (int *)0x0) {
      (**(code **)(*(int *)*in_stack_00000004 + 8))();
    }
    *in_stack_00000004 = 0;
    uVar2 = uVar1;
    break;
  case 0xc:
    FUN_00424ab4(in_stack_00000004);
    *in_stack_00000004 = 0;
    in_stack_00000004[1] = 0;
    in_stack_00000004[2] = 0;
    in_stack_00000004[3] = 0;
    uVar2 = 0;
  }
  return uVar2;
}
