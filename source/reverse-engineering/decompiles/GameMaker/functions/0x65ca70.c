// rea decompile_all
// name: FUN_0065ca70
// address: 0x65ca70
// body: available
// range: 0x65ca70-0x65cb88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65caa2 (push 0x65cb89 followed by fs-segment stack chaining); handler 0x65cb89 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065ca70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  int in_stack_00000004;
  undefined4 *in_stack_00000018;
  undefined1 local_44 [16];
  undefined1 local_34 [12];
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puStack_18 = (undefined1 *)0x65ca8c;
  FUN_0042bcec(&stack0x00000008);
  if (in_stack_00000018 != (undefined4 *)0x0) {
    *in_stack_00000018 = 0;
  }
  puStack_1c = &LAB_0065cb89;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar7 = '\0';
  cVar6 = '\0';
  uVar5 = 1;
  local_24 = 0x65cab1;
  puStack_18 = &stack0xfffffffc;
  FUN_00429c6c(&stack0xffffffec,0,1);
  local_24 = 0x65cabc;
  FUN_0042cb04(&stack0x00000008,&stack0xffffffec);
  if (!(bool)uVar5) {
    local_24 = 0x65cad0;
    iVar4 = FUN_0067236c(*(undefined4 *)(in_stack_00000004 + 0xc));
    local_24 = 0x65cae2;
    FUN_00429c6c(&local_24,*(undefined4 *)(*(int *)(iVar4 + 8) + 8),0xfc);
    local_24 = 0x65caed;
    FUN_0042cb14(&stack0x00000008,&local_24);
    if ((bool)uVar5 || cVar7 != cVar6) {
      uVar1 = *(undefined4 *)(in_stack_00000004 + 0xc);
      local_24 = 0x65cb08;
      local_24 = FUN_0067236c(uVar1);
      uStack_28 = 0x65cb14;
      FUN_00424d3c(local_34,&stack0x00000008);
      uStack_28 = 0x65cb23;
      FUN_00429c6c(local_44,1,1);
      uStack_28 = 0x65cb2e;
      FUN_0042caf8(local_34,local_44);
      uStack_28 = 0x65cb36;
      uVar3 = FUN_004256a8(local_34);
      uVar2 = local_24;
      local_24 = 0x65cb3e;
      local_24 = FUN_00672cc0(uVar2,uVar3);
      uStack_28 = 0x65cb4d;
      iVar4 = FUN_0065c9fc(&DAT_0065c21c,1,uVar1);
      if (iVar4 != 0) {
        iVar4 = iVar4 + 0x14;
      }
      local_24 = 0x65cb5e;
      FUN_0040b158(in_stack_00000018,iVar4);
    }
    else {
      local_24 = 0x65caf7;
      FUN_0040b140(in_stack_00000018);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0065cb90;
  puStack_1c = (undefined1 *)0x65cb80;
  FUN_00408e44(local_44,&DAT_004012cc,4);
  puStack_1c = (undefined1 *)0x65cb88;
  FUN_004249e8(&stack0x00000008);
  return;
}
