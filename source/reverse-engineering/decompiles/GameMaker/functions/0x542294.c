// rea decompile_all
// name: FUN_00542294
// address: 0x542294
// body: available
// range: 0x542294-0x542561 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5422ac (push 0x542562 followed by fs-segment stack chaining); handler 0x542562 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00542294(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined3 uStack_8;
  byte local_5;

  puStack_1c = &stack0xfffffffc;
  uStack_8 = 0;
  local_5 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_20 = &LAB_00542562;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (*(char *)(param_4 + -0x8105) != '\0') {
    *(undefined1 *)(param_4 + -0x8105) = 0;
    puStack_1c = &stack0xfffffffc;
    goto LAB_00542547;
  }
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_4 + -0x8114) <= *(int *)(param_4 + -0x8110) + param_1) {
    if (*(char *)(param_4 + -0x8115) != '\0') {
      puStack_1c = &stack0xfffffffc;
      if (*(int *)(param_4 + -0x8114) <= *(int *)(param_4 + -0x8110)) {
        puStack_1c = &stack0xfffffffc;
        FUN_0040b75c(&PTR_DAT_0053b370,&local_c);
        (**(code **)(**(int **)(param_4 + -0x811c) + 0x10))(*(int **)(param_4 + -0x811c),1,local_c);
      }
      goto LAB_00542547;
    }
    *(undefined1 *)(param_4 + -0x102) =
         *(undefined1 *)(param_4 + -0x104 + *(int *)(param_4 + -0x8120));
    *(undefined1 *)(param_4 + -0x101) =
         *(undefined1 *)(param_4 + -0x103 + *(int *)(param_4 + -0x8120));
    iVar4 = (**(code **)(**(int **)(param_4 + -0x8124) + 0xc))
                      (*(int **)(param_4 + -0x8124),&local_5,1);
    if (iVar4 != 1) goto LAB_00542547;
    if (local_5 == 0) {
      *(undefined1 *)(param_4 + -0x8125) = 1;
      *(undefined1 *)(param_4 + -0x8115) = 1;
    }
    else {
      uVar5 = (**(code **)**(undefined4 **)(param_4 + -0x8124))();
      uVar6 = FUN_0043f234(*(undefined4 *)(param_4 + -0x8124));
      if (extraout_EDX - extraout_EDX_00 == (uint)(uVar5 < uVar6)) {
        if (uVar5 - uVar6 < (uint)local_5) {
LAB_005423f0:
          FUN_0040b75c(&PTR_DAT_0053b320,&local_10);
          (**(code **)(**(int **)(param_4 + -0x811c) + 0x10))
                    (*(int **)(param_4 + -0x811c),1,local_10);
          cVar2 = (**(code **)**(undefined4 **)(param_4 + -0x8124))();
          cVar3 = FUN_0043f234(*(undefined4 *)(param_4 + -0x8124));
          local_5 = cVar2 - cVar3;
        }
      }
      else if ((int)((extraout_EDX - extraout_EDX_00) - (uint)(uVar5 < uVar6)) < 0)
      goto LAB_005423f0;
      if (local_5 != 0) {
        FUN_0053b6b8(*(undefined4 *)(param_4 + -0x8124),param_4 + -0x100,local_5);
      }
    }
    *(uint *)(param_4 + -0x8120) = local_5 + 2;
    *(int *)(param_4 + -0x8110) = (*(int *)(param_4 + -0x8110) - *(int *)(param_4 + -0x8114)) + 0x10
    ;
    *(int *)(param_4 + -0x8114) = *(int *)(param_4 + -0x8120) * 8;
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  *(int *)(param_4 + -0x8110) = *(int *)(param_4 + -0x8110) + param_1;
LAB_00542547:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00542569;
  puStack_20 = (undefined1 *)0x542561;
  thunk_FUN_00406e80(&local_10,2,puVar1);
  return;
}
