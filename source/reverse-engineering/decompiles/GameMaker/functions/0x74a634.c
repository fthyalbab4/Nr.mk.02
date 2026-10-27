// rea decompile_all
// name: FUN_0074a634
// address: 0x74a634
// body: available
// range: 0x74a634-0x74a78e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74a653 (push 0x74a78f followed by fs-segment stack chaining); handler 0x74a78f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074a634(void)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  uint *in_FS_OFFSET;
  int in_stack_00000004;
  uint uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  char local_15;
  undefined2 local_14;
  ushort local_12;
  undefined2 *local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_38 = &stack0xfffffffc;
  local_28 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_3c = &LAB_0074a78f;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_40;
  puVar5 = *(uint **)(*(int *)(in_stack_00000004 + -4) + 0x2c);
  do {
    puVar3 = puStack_38;
    uVar2 = *puVar5;
    if (uVar2 == 0) {
      *in_FS_OFFSET = uStack_40;
      puStack_38 = &LAB_0074a796;
      puStack_3c = (undefined1 *)0x74a77e;
      FUN_00406e5c(&local_28,uStack_40,puVar3);
      puStack_3c = (undefined1 *)0x74a786;
      FUN_00407a78(&local_c);
      puStack_3c = (undefined1 *)0x74a78e;
      thunk_FUN_00406e5c(&local_8);
      return;
    }
    local_12 = 0;
    local_14 = 0;
    puVar6 = (undefined2 *)0x0;
    if ((uVar2 & 0x80000000) == 0) {
      cVar1 = *(char *)(*(int *)(in_stack_00000004 + -4) + 0x20);
      if (cVar1 == '\0') {
LAB_0074a68e:
        local_10 = (undefined2 *)
                   FUN_0074e8a0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x14),uVar2);
        local_14 = *local_10;
        puVar6 = local_10 + 1;
      }
      else if (cVar1 == '\x01') {
        local_10 = (undefined2 *)
                   FUN_0074e98c(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x14),uVar2);
        local_14 = *local_10;
        puVar6 = local_10 + 1;
      }
      else if (cVar1 == '\x02') goto LAB_0074a68e;
    }
    else {
      local_12 = FUN_00732d0c(uVar2);
    }
    uVar4 = FUN_00407a78(&local_c);
    FUN_00407140(&local_28,puVar6,0,uVar4);
    uVar2 = uStack_40;
    uStack_40 = 0x74a704;
    local_15 = FUN_00733cc8(local_28,uVar2);
    uStack_40 = 0x74a712;
    FUN_00408130(&local_8,local_c);
    if (local_15 == '\0') {
      uStack_40 = 0x74a722;
      FUN_00408044(&local_8,puVar6);
    }
    local_1c = *(undefined4 *)(in_stack_00000004 + -4);
    uStack_40 = (uint)local_12;
    local_20 = FUN_0074a45c(&LAB_0074477c,1,*(undefined4 *)(in_stack_00000004 + -4),local_8,local_14
                           );
    uStack_40 = 0x74a759;
    local_24 = FUN_0043ae88(local_1c,local_20);
    puVar5 = puVar5 + 1;
  } while( true );
}
