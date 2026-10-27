// rea decompile_all
// name: FUN_0067e00c
// address: 0x67e00c
// body: available
// range: 0x67e00c-0x67e266 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067e00c(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined **local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  int iStack_18;
  int iStack_14;

  local_44 = &PTR_LAB_0067a6c8;
  (**(code **)(*param_1 + 0x3c))(param_1,&local_44);
  if (local_44 == (undefined **)0x0) {
    local_44 = &PTR_LAB_0067a6c8;
  }
  param_3[1] = 0;
  if (param_1[0x14] != 0) {
    iVar2 = param_1[0x14];
    param_1[0x14] = 0;
    FUN_00405a7c(iVar2);
  }
  iVar2 = (*(code *)local_44[0xb])(local_44,1,0);
  param_1[0x14] = iVar2;
  FUN_004ee79c(iVar2,param_1[0x29]);
  *(int *)(param_1[0x14] + 0x2a4) = *param_3;
  iVar2 = FUN_0067eb08(param_2);
  if (iVar2 == 0) {
    iStack_40 = 0;
  }
  else {
    iVar2 = FUN_0067eb08(param_2);
    iStack_40 = *(int *)(*(int *)(iVar2 + 0x94) + 4);
  }
  iVar2 = FUN_0067eb08(param_2);
  if (iVar2 == 0) {
LAB_0067e0bf:
    cVar1 = FUN_00405c98(*param_3,&PTR_LAB_0067d118);
    if (cVar1 == '\0') {
      iVar2 = FUN_0067efcc(param_1[0x28],*param_3);
      if (iVar2 < 0) {
        iVar2 = FUN_0067eb08(param_2);
        if (iVar2 == 0) {
          iStack_3c = *(undefined4 *)(*param_3 + 0x4c);
          FUN_004ee09c(*param_3,&iStack_40,&iStack_18);
          iStack_40 = iStack_18;
          iStack_3c = iStack_14;
        }
        else {
          iVar2 = FUN_0067eb08(param_2);
          iStack_40 = *(int *)(*(int *)(*(int *)(iVar2 + 0x94) + 0xc) + 0x40);
          uStack_2c = 0;
          iStack_3c = 0;
          iStack_30 = iStack_40;
          iVar2 = FUN_0067eb08(param_2);
          FUN_004ee09c(*(undefined4 *)(*(int *)(iVar2 + 0x94) + 0xc),&iStack_40,&iStack_18);
          iStack_40 = iStack_18;
          iStack_3c = iStack_14;
          iVar2 = FUN_0067eb08(param_2);
          iStack_38 = *(int *)(*(int *)(iVar2 + 0x94) + 4);
          iStack_34 = 0;
          FUN_004ee09c(*param_3,&iStack_38,&iStack_18);
          iStack_38 = iStack_18;
          iStack_34 = iStack_14;
          iStack_40 = iStack_18;
          iVar2 = FUN_0067eb08(param_2);
          iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0x94) + 0xc) + 0x4c) + iStack_3c;
          iVar2 = FUN_0067eb08(param_2);
          iStack_3c = iVar3 + *(int *)(*(int *)(iVar2 + 0x94) + 8);
        }
        goto LAB_0067e220;
      }
    }
  }
  else {
    iVar2 = FUN_0067eb08(param_2);
    if (*(int *)(*(int *)(iVar2 + 0x94) + 0xc) != 0) goto LAB_0067e0bf;
  }
  iStack_3c = *(int *)(*param_3 + 0x4c);
  iVar2 = FUN_0067eb08(param_2);
  iStack_3c = iStack_3c + *(int *)(*(int *)(iVar2 + 0x94) + 8);
  FUN_004ee09c(*param_3,&iStack_40,&iStack_18);
  iStack_40 = iStack_18;
  iStack_3c = iStack_14;
LAB_0067e220:
  iVar2 = FUN_0067d9e4(param_1,param_2);
  FUN_0040c114(iStack_40,iStack_3c,iStack_40 + *(int *)(param_2 + 0x28),auStack_28,
               iVar2 + iStack_3c + -4);
  (**(code **)(*(int *)param_1[0x14] + 0x120))((int *)param_1[0x14],auStack_28,param_2);
  return;
}
