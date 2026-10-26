// rea decompile_all
// name: FUN_00550f68
// address: 0x550f68
// body: available
// range: 0x550f68-0x55106b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x550f82 (push 0x55106c followed by fs-segment stack chaining); handler 0x55106c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00550f68(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_28 = &LAB_0055106c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  cVar2 = FUN_005513cc(param_1);
  if (cVar2 != '\0') {
    iVar4 = *(int *)(param_1 + 0x34);
    local_18 = *(int *)(param_1 + 0x30);
    if (-1 < local_18 + -1) {
      do {
        FUN_00407c34(&local_8,8,0);
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
          FUN_004074b8(&local_8,local_8,0);
        }
        uVar3 = thunk_FUN_00407af8(&local_8);
        FUN_00404514(iVar4,uVar3,8);
        FUN_00543258(&local_8);
        uVar3 = FUN_00407dd0(&local_10);
        cVar2 = FUN_00534b38(local_8,uVar3);
        FUN_0040840c(&local_c,local_10);
        if (cVar2 == '\0') {
          FUN_004083c0(&local_c,local_8);
        }
        (**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(*(int **)(param_1 + 0x18),local_c,iVar4);
        iVar4 = iVar4 + 0x28;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00551073;
  puStack_28 = (undefined1 *)0x55105b;
  FUN_00407dd0(&local_10,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x551063;
  thunk_FUN_004072d8(&local_c);
  puStack_28 = (undefined1 *)0x55106b;
  FUN_004072d8(&local_8);
  return;
}
