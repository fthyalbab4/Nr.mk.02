// rea decompile_all
// name: FUN_0043ecc8
// address: 0x43ecc8
// body: available
// range: 0x43ecc8-0x43ed81 inclusive
// range: 0x43ed99-0x43edad inclusive
// range: 0x43edd1-0x43edd5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ecd9 (push 0x43edae followed by fs-segment stack chaining); handler 0x43edae lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ed5e (push 0x43ed82 followed by fs-segment stack chaining); handler 0x43ed82 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ecc8(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_0043edae;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x43eced;
  iVar2 = FUN_00440f94(*(undefined4 *)(in_stack_00000004 + -0x10),
                       *(undefined4 *)(in_stack_00000004 + -0x1c));
  *(undefined4 *)(in_stack_00000004 + -8) = 0;
  if (*(short *)(*(int *)(in_stack_00000004 + -0x10) + 0x72) != 0) {
    puStack_20 = (undefined1 *)(in_stack_00000004 + -8);
    puStack_24 = (undefined1 *)0x43ed1f;
    (**(code **)(*(int *)(in_stack_00000004 + -0x10) + 0x70))
              (*(undefined4 *)(*(int *)(in_stack_00000004 + -0x10) + 0x74),
               *(undefined4 *)(in_stack_00000004 + -0x10),iVar2);
  }
  if (*(int *)(in_stack_00000004 + -8) == 0) {
    puStack_20 = (undefined1 *)0x43ed2d;
    uVar3 = (**(code **)(iVar2 + -0xc))();
    *(undefined4 *)(in_stack_00000004 + -8) = uVar3;
    if ((*(byte *)(in_stack_00000004 + -0x11) & 4) != 0) {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -8) + 0x1c);
      *puVar1 = *puVar1 | 1;
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -8) + 0x1c);
      *puVar1 = *puVar1 | 0x200;
    }
    puStack_24 = &LAB_0043ed82;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x2c))
              (*(int **)(in_stack_00000004 + -8),0xffffffff,
               *(undefined4 *)(*(int *)(in_stack_00000004 + -0x10) + 0x28));
    *in_FS_OFFSET = uStack_28;
  }
  puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -8) + 0x1c);
  *puVar1 = *puVar1 | 1;
  *in_FS_OFFSET = uStack_1c;
  return;
}
