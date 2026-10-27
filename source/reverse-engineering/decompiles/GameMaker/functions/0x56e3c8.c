// rea decompile_all
// name: FUN_0056e3c8
// address: 0x56e3c8
// body: available
// range: 0x56e3c8-0x56e56e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e3c8(void)

{
  char cVar1;
  int *piVar2;
  int in_stack_00000004;
  undefined1 local_6c [48];
  undefined1 local_3c [48];
  int local_c;
  int local_8;

  piVar2 = (int *)(in_stack_00000004 + -4);
  if (*(int *)(*piVar2 + 0x300) != 0) {
    FUN_0056b83c(*piVar2 + 0x300,*(undefined4 *)(*piVar2 + 0x284),*(undefined4 *)(*piVar2 + 0x290));
  }
  if (*(int *)(*piVar2 + 0x308) != 0) {
    FUN_0056b83c(*piVar2 + 0x308,*(undefined4 *)(*piVar2 + 0x284),1);
  }
  if (*(int *)(*piVar2 + 0x304) != 0) {
    FUN_0056b83c(*piVar2 + 0x304,*(undefined4 *)(*piVar2 + 0x2c0),*(undefined4 *)(*piVar2 + 0x294));
  }
  local_c = *(int *)(*piVar2 + 0x288);
  local_8 = *(int *)(*piVar2 + 0x28c);
  if (*(int *)(*piVar2 + 0x2c0) <= *(int *)(*piVar2 + 0x28c)) {
    local_8 = *(int *)(*piVar2 + 0x2c0) + -1;
  }
  if (*(int *)(*piVar2 + 0x284) <= *(int *)(*piVar2 + 0x288)) {
    local_c = *(int *)(*piVar2 + 0x284) + -1;
  }
  if ((*(int *)(*piVar2 + 0x288) != local_c) || (*(int *)(*piVar2 + 0x28c) != local_8)) {
    FUN_0056f840(*piVar2,local_c,local_8,1,1);
  }
  if ((*(int *)(*piVar2 + 0x278) != local_c) || (*(int *)(*piVar2 + 0x27c) != local_8)) {
    FUN_0056f7bc(*piVar2,&local_c);
  }
  if (((*(char *)(*piVar2 + 0x31e) == '\0') &&
      (*(int *)(*piVar2 + 0x2c8) == *(int *)(in_stack_00000004 + -0x4c))) &&
     (*(int *)(*piVar2 + 0x2cc) == *(int *)(in_stack_00000004 + -0x1c))) {
    cVar1 = FUN_004f7a54(*piVar2);
    if (cVar1 != '\0') {
      FUN_0056dcec(*piVar2,local_6c);
      FUN_0056e360(in_stack_00000004 + -0x68,local_6c,0,in_stack_00000004);
      FUN_0056e360(in_stack_00000004 + -0x38,local_3c,0xffffffff,in_stack_00000004);
    }
  }
  else {
    FUN_0056f120(*piVar2);
  }
  FUN_00570190(*piVar2);
  FUN_00405d08(*piVar2,*(undefined4 *)(in_stack_00000004 + -0x6c),
               *(undefined4 *)(in_stack_00000004 + -0x70));
  return;
}
