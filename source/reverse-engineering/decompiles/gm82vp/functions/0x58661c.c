// rea decompile_all
// name: FUN_0058661c
// address: 0x58661c
// body: available
// range: 0x58661c-0x58688b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x586681 (push 0x58688c followed by fs-segment stack chaining); handler 0x58688c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058661c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_fffffe1c;
  undefined4 *in_stack_fffffe24;
  undefined4 uStack_1d0;
  undefined1 *puStack_1cc;
  undefined1 *puStack_1c8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_194;
  undefined4 *local_18c;
  undefined1 local_184 [384];

  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  puStack_1c8 = (undefined1 *)0x586676;
  local_19c = param_3;
  local_194 = param_2;
  local_18c = param_1;
  FUN_0040902c(local_184,&DAT_00615f70,0x10);
  puStack_1cc = &LAB_0058688c;
  uStack_1d0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1d0;
  local_1a0 = 0;
  iVar3 = *(int *)(local_194 + 0x28);
  puStack_1c8 = &stack0xfffffffc;
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    puVar2 = local_184;
    puStack_1c8 = &stack0xfffffffc;
    do {
      local_1a0 = 0;
      local_1a0 = FUN_00586fa0(local_18c,**(int **)(local_194 + 0x2c) + iVar4 * 0x38,puVar2);
      if (local_1a0 != 0) goto LAB_00586857;
      iVar4 = iVar4 + 1;
      puVar2 = puVar2 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(local_194 + 4);
  if (iVar3 < 500000) {
    if (iVar3 < 100000) {
      if ((*PTR_DAT_00689498 == '\0') &&
         (*(char *)(*(int *)PTR_DAT_0068956c + 0x4c + *(int *)(local_194 + 4) * 0x50) != '\0')) {
        FUN_00610d7c(local_18c[3],*(undefined4 *)(local_194 + 0x30),&PTR_DAT_005868ac);
        local_1a0 = -1;
      }
      else {
        in_stack_fffffe24 = &local_1b8;
        (**(code **)(*(int *)PTR_DAT_0068956c + 0x44 + *(int *)(local_194 + 4) * 0x50))
                  (*local_18c,local_18c[1],*(undefined4 *)(local_194 + 0x28),in_stack_fffffe24,0xf,
                   local_184);
        FUN_00409360(local_19c,&local_1b8,&DAT_00615f70);
      }
    }
    else {
      in_stack_fffffe24 = (undefined4 *)0xf;
      in_stack_fffffe1c = local_19c;
      cVar1 = FUN_00588af8(iVar3 + -100000,*local_18c,local_18c[1],local_19c,1,0xf,local_184,
                           *(undefined4 *)(local_194 + 0x28));
      if (cVar1 == '\0') {
        local_1a0 = -1;
      }
    }
  }
  else {
    in_stack_fffffe24 = (undefined4 *)0xf;
    in_stack_fffffe1c = 0x586730;
    cVar1 = FUN_00586134(iVar3 + -500000,*local_18c,local_18c[1],local_19c,0xf,local_184,
                         *(undefined4 *)(local_194 + 0x28));
    if (cVar1 == '\0') {
      local_1a0 = -1;
    }
  }
LAB_00586857:
  *in_FS_OFFSET = in_stack_fffffe1c;
  FUN_004090d0(&local_1b8,&DAT_00615f70,in_stack_fffffe24,&LAB_00586893);
  FUN_00409120(local_184,&DAT_00615f70,0x10);
  return;
}
