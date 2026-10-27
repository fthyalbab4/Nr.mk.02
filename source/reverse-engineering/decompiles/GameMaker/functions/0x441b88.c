// rea decompile_all
// name: FUN_00441b88
// address: 0x441b88
// body: available
// range: 0x441b88-0x441c41 inclusive
// range: 0x441c59-0x441c6d inclusive
// range: 0x441c91-0x441c95 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441b99 (push 0x441c6e followed by fs-segment stack chaining); handler 0x441c6e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441c1e (push 0x441c42 followed by fs-segment stack chaining); handler 0x441c42 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441b88(void)

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
  puStack_18 = &LAB_00441c6e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x441bad;
  iVar2 = FUN_00443e54(*(undefined4 *)(in_stack_00000004 + -0x10),
                       *(undefined4 *)(in_stack_00000004 + -0x1c));
  *(undefined4 *)(in_stack_00000004 + -8) = 0;
  if (*(short *)(*(int *)(in_stack_00000004 + -0x10) + 0x72) != 0) {
    puStack_20 = (undefined1 *)(in_stack_00000004 + -8);
    puStack_24 = (undefined1 *)0x441bdf;
    (**(code **)(*(int *)(in_stack_00000004 + -0x10) + 0x70))
              (*(undefined4 *)(*(int *)(in_stack_00000004 + -0x10) + 0x74),
               *(undefined4 *)(in_stack_00000004 + -0x10),iVar2);
  }
  if (*(int *)(in_stack_00000004 + -8) == 0) {
    puStack_20 = (undefined1 *)0x441bed;
    uVar3 = (**(code **)(iVar2 + -0xc))();
    *(undefined4 *)(in_stack_00000004 + -8) = uVar3;
    if ((*(byte *)(in_stack_00000004 + -0x11) & 4) != 0) {
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -8) + 0x1c);
      *puVar1 = *puVar1 | 1;
      puVar1 = (ushort *)(*(int *)(in_stack_00000004 + -8) + 0x1c);
      *puVar1 = *puVar1 | 0x200;
    }
    puStack_24 = &LAB_00441c42;
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
