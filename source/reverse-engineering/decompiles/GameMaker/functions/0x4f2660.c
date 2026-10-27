// rea decompile_all
// name: FUN_004f2660
// address: 0x4f2660
// body: available
// range: 0x4f2660-0x4f277d inclusive
// range: 0x4f27c8-0x4f2811 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f2678 (push 0x4f28ca followed by fs-segment stack chaining); handler 0x4f28ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f26ad (push 0x4f28a7 followed by fs-segment stack chaining); handler 0x4f28a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f26d3 (push 0x4f284f followed by fs-segment stack chaining); handler 0x4f284f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f26e1 (push 0x4f2812 followed by fs-segment stack chaining); handler 0x4f2812 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4f274f (push 0x4f277e followed by fs-segment stack chaining); handler 0x4f277e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2660(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_004f28ca;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x4f2687;
  uVar3 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_30 = (undefined1 *)0x0;
  puStack_34 = (undefined1 *)0x4f269f;
  FUN_00409be0(&local_8,&LAB_004f2270,1);
  puStack_34 = &LAB_004f28a7;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_3c = (undefined1 *)0x4f26bc;
  puStack_30 = &stack0xfffffffc;
  uVar4 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x1a8) = uVar4;
  puStack_40 = &LAB_004f284f;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_4c = &LAB_004f2812;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  local_14 = *(int *)(*(int *)(in_stack_00000004 + -0x14) + 8) + -1;
  puStack_48 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  if (-1 < local_14) {
    do {
      puStack_3c = puVar2;
      puStack_48 = puVar1;
      puStack_54 = (undefined1 *)0x4f2708;
      iVar5 = FUN_0043b048(*(undefined4 *)(in_stack_00000004 + -0x14),local_14);
      puStack_54 = (undefined1 *)0x4f2716;
      iVar6 = FUN_0043b0b0(uVar3,iVar5);
      if ((iVar6 == -1) || (*(int *)(local_8 + iVar6 * 4) < 10)) {
        *(undefined4 *)(iVar5 + 0x1a8) = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x1a8);
        puStack_58 = &LAB_004f277e;
        uStack_5c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_5c;
        puStack_54 = &stack0xfffffffc;
        FUN_004f2c3c(iVar5);
        *in_FS_OFFSET = uStack_5c;
        if (*(int *)(in_stack_00000004 + -4) != iVar5) {
          *(undefined4 *)(iVar5 + 0x1a8) = 0;
        }
        return;
      }
      local_14 = local_14 + -1;
      puVar1 = puStack_48;
      puVar2 = puStack_3c;
    } while (local_14 != -1);
  }
  puVar1 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &DAT_004f2819;
  iVar5 = **(int **)(in_stack_00000004 + -0x14);
  puStack_4c = (undefined1 *)0x4f27ed;
  (**(code **)(iVar5 + 8))(*(int **)(in_stack_00000004 + -0x14),iVar5,puVar1);
  uVar3 = *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x1a8);
  *(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x1a8) =
       *(undefined4 *)(in_stack_00000004 + -0x14);
  *(undefined4 *)(in_stack_00000004 + -0x14) = uVar3;
  return;
}
