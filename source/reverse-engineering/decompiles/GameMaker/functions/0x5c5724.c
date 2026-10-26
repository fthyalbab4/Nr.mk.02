// rea decompile_all
// name: FUN_005c5724
// address: 0x5c5724
// body: available
// range: 0x5c5724-0x5c5846 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c5744 (push 0x5c5847 followed by fs-segment stack chaining); handler 0x5c5847 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c5724(int param_1,int param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int *local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  puVar7 = &stack0xfffffffc;
  local_c = (int *)0x0;
  puStack_20 = &LAB_005c5847;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = *(int *)(param_1 + 0x18);
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((*(int *)(iVar4 + 0x28) != 0) && (puVar1 = &stack0xfffffffc, *(int *)(iVar4 + 0x24) == 0)) {
    uVar3 = FUN_005cb194(*(undefined4 *)(iVar4 + 0x1c));
    puVar1 = puStack_1c;
    if ((uVar3 & 2) != 0) {
      cVar2 = (**(code **)(*param_3 + 0x38))();
      puVar1 = puStack_1c;
      if (1 < (byte)(cVar2 - 2U)) {
        iVar4 = FUN_005c4f70(local_8);
        if (iVar4 == 0) {
          uVar5 = FUN_005c7e58(*(undefined4 *)(*(int *)(local_8 + 0x18) + 0x28));
          FUN_005c5614(uVar5,0xffffffff,1,puVar7);
        }
        if (param_2 == -1) {
          FUN_005c5614(1,0xffffffff,0,&stack0xfffffffc);
        }
        iVar4 = FUN_005c5508(local_8,param_2,param_3);
        if (param_2 == -1) {
          uVar5 = FUN_005c7e58(*(undefined4 *)(*(int *)(local_8 + 0x18) + 0x28));
        }
        else {
          uVar5 = FUN_005c7e58(*(undefined4 *)(local_8 + 0x18));
        }
        iVar6 = FUN_005c4f70(local_8);
        if (iVar4 < iVar6 + -1) {
          FUN_005c5340(local_8,iVar4 + 1,&local_c);
          cVar2 = (**(code **)(*local_c + 0x38))();
          if (cVar2 == '\x03') goto LAB_005c5831;
        }
        FUN_005c5614(uVar5,iVar4 + 1,1,&stack0xfffffffc);
        goto LAB_005c5831;
      }
    }
  }
  puStack_1c = puVar1;
  FUN_005c5508(local_8,param_2,param_3);
LAB_005c5831:
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005c584e;
  puStack_20 = (undefined1 *)0x5c5846;
  FUN_0040b140(&local_c,uStack_24,puVar1);
  return;
}
