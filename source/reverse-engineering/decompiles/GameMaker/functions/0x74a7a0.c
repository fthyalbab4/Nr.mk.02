// rea decompile_all
// name: FUN_0074a7a0
// address: 0x74a7a0
// body: available
// range: 0x74a7a0-0x74a90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74a7bf (push 0x74a90c followed by fs-segment stack chaining); handler 0x74a90c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074a7a0(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  char local_13;
  undefined2 local_12;
  undefined2 *local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_38 = &LAB_0074a90c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  piVar4 = *(int **)(*(int *)(in_stack_00000004 + -4) + 0x2c);
  do {
    puVar2 = puStack_34;
    if ((piVar4[1] == 0) && (*piVar4 == 0)) {
      *in_FS_OFFSET = uStack_3c;
      puStack_34 = &LAB_0074a913;
      puStack_38 = (undefined1 *)0x74a8fb;
      FUN_00406e5c(&local_24,uStack_3c,puVar2);
      puStack_38 = (undefined1 *)0x74a903;
      FUN_00407a78(&local_c);
      puStack_38 = (undefined1 *)0x74a90b;
      thunk_FUN_00406e5c(&local_8);
      return;
    }
    uVar6 = 0;
    local_12 = 0;
    puVar5 = (undefined2 *)0x0;
    if ((piVar4[1] & 0x80000000U) == 0) {
      cVar1 = *(char *)(*(int *)(in_stack_00000004 + -4) + 0x20);
      if (cVar1 == '\0') {
LAB_0074a805:
        local_10 = (undefined2 *)
                   FUN_0074e8a0(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x14),*piVar4);
        local_12 = *local_10;
        puVar5 = local_10 + 1;
      }
      else if (cVar1 == '\x01') {
        local_10 = (undefined2 *)
                   FUN_0074e98c(*(undefined4 *)(*(int *)(in_stack_00000004 + -4) + 0x14),*piVar4);
        local_12 = *local_10;
        puVar5 = local_10 + 1;
      }
      else if (cVar1 == '\x02') goto LAB_0074a805;
    }
    else {
      uVar6 = FUN_00732ce4();
    }
    uVar3 = FUN_00407a78(&local_c);
    FUN_00407140(&local_24,puVar5,0,uVar3);
    uVar3 = uStack_3c;
    uStack_3c = 0x74a87c;
    local_13 = FUN_00733cc8(local_24,uVar3);
    uStack_3c = 0x74a88a;
    FUN_00408130(&local_8,local_c);
    if (local_13 == '\0') {
      uStack_3c = 0x74a89a;
      FUN_00408044(&local_8,puVar5);
    }
    local_18 = *(undefined4 *)(in_stack_00000004 + -4);
    uStack_3c = uVar6;
    local_1c = FUN_0074a45c(&LAB_0074477c,1,*(undefined4 *)(in_stack_00000004 + -4),local_8,local_12
                           );
    uStack_3c = 0x74a8cd;
    local_20 = FUN_0043ae88(local_18,local_1c);
    piVar4 = piVar4 + 2;
  } while( true );
}
