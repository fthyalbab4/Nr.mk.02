// rea decompile_all
// name: FUN_006127a4
// address: 0x6127a4
// body: available
// range: 0x6127a4-0x6128fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6127cc (push 0x6128fe followed by fs-segment stack chaining); handler 0x6128fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006127a4(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_EDX;
  int *in_FS_OFFSET;
  bool bVar6;
  undefined4 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  uStack_10 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_006128fe;
  puStack_3c = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_3c;
  puVar1 = &stack0xfffffffc;
  local_14 = param_3;
  if (-1 < param_2) {
    iVar3 = (**(code **)(*param_1 + 0x14))();
    puVar1 = puStack_34;
    if (param_2 < iVar3) {
      (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_8);
      FUN_00415f30(param_1[0x12],&local_c);
      iVar4 = (**(code **)PTR_u__0077d7dc_0x20_00781758)(local_c,local_8);
      puStack_3c = &local_18;
      FUN_00407058(&local_c);
      iVar5 = FUN_00408238();
      iVar3 = iVar5 + iVar4;
      if (SCARRY4(iVar5,iVar4)) {
        FUN_00405944(iVar5,iVar3);
        iVar3 = extraout_EDX;
      }
      FUN_004086a8(local_8,iVar3,0x7fffffff);
      FUN_00415e90(local_18,local_14);
      if ((char)param_1[0x13] != '\0') {
        while( true ) {
          bVar6 = SCARRY4(param_2,1);
          param_2 = param_2 + 1;
          if (bVar6) {
            FUN_00405944();
          }
          iVar3 = (**(code **)(*param_1 + 0x14))();
          if (param_2 == iVar3) break;
          (**(code **)(*param_1 + 0xc))(param_1,param_2,&local_8);
          cVar2 = FUN_005e3ac0(local_8,1,&DAT_00612918);
          if (cVar2 == '\0') break;
          FUN_00415dd0(*local_14,&local_1c);
          FUN_00415dd0(local_8,&local_20);
          FUN_00408480(local_14,3);
        }
      }
      FUN_00415dd0(*local_14,&local_24);
      FUN_00407eb8(local_14,local_24);
      goto LAB_006128d6;
    }
  }
  puStack_34 = puVar1;
  FUN_00407eb8(local_14,0);
LAB_006128d6:
  puVar1 = puStack_34;
  *in_FS_OFFSET = (int)puStack_3c;
  puStack_34 = &LAB_00612905;
  puStack_38 = (undefined1 *)0x6128f0;
  thunk_FUN_00406e80(&local_24,4,puVar1);
  puStack_38 = (undefined1 *)0x6128fd;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
