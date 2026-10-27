// rea decompile_all
// name: FUN_00678f54
// address: 0x678f54
// body: available
// range: 0x678f54-0x6792f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x678f72 (push 0x6792f9 followed by fs-segment stack chaining); handler 0x6792f9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00678f54(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int aiStackY_1804 [1516];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int aiStack_24 [3];
  undefined1 local_18 [8];
  int local_10;
  int local_c;
  uint local_8;

  bVar5 = 0;
  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_2c = 0;
  puStack_44 = &LAB_006792f9;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  (**(code **)(*param_1 + 0x54))(param_1,local_18);
  if ((*(byte *)(param_1 + 7) & 0x10) == 0) {
    if (((char)param_1[0x7b] == '\0') || ((char)param_1[0x75] != '\0')) {
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
    }
    FUN_0045bda4(*(undefined4 *)(param_1[0x6a] + 0x48),(&DAT_0077f398)[iVar3]);
  }
  else {
    FUN_0045bda4(*(undefined4 *)(param_1[0x6a] + 0x48),(&DAT_0077f398)[*(byte *)(param_1 + 0x7b)]);
  }
  iVar3 = param_1[0x6d];
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x24) == 0x20000000)) {
    FUN_00679e90(param_1);
    iVar3 = FUN_00677f54();
    FUN_0045bc24(*(undefined4 *)(param_1[0x6a] + 0x48),*(undefined4 *)(iVar3 + 0x44));
  }
  else {
    FUN_0045bc24(*(undefined4 *)(param_1[0x6a] + 0x48),*(undefined4 *)(iVar3 + 0x24));
  }
  (**(code **)(*param_1 + 0xc0))(param_1,local_18);
  cVar2 = (**(code **)(*param_1 + 0xe4))();
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0xcc))(param_1,2);
    goto LAB_00679220;
  }
  FUN_00679e90(param_1);
  cVar2 = FUN_00676810();
  if (cVar2 != '\0') {
    FUN_00679e90(param_1);
    iVar3 = FUN_006767e4();
    if (*(char *)(iVar3 + 0x29) == '\0') {
      (**(code **)(*param_1 + 0xbc))(param_1,param_1 + 0x6f);
    }
    else {
      (**(code **)(*param_1 + 0xb8))(param_1,param_1 + 0x6f);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0xac))();
  if (cVar2 == '\0') {
    cVar2 = FUN_00679d50(param_1);
    if (cVar2 != '\0') goto LAB_00679220;
  }
  local_8 = FUN_004f1454(param_1,0);
  local_8 = local_8 | 0x100;
  piVar4 = param_1 + (uint)bVar5 * -2 + 0x78;
  local_28 = param_1[0x77];
  aiStack_24[(uint)bVar5 * -2] = *piVar4;
  aiStack_24[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = piVar4[(uint)bVar5 * -2 + 1];
  (aiStack_24 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (piVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  FUN_0045bda4(*(undefined4 *)(param_1[0x6a] + 0x48),1);
  FUN_00679e90(param_1);
  iVar3 = FUN_00677f54();
  FUN_0045b0d0(*(undefined4 *)(param_1[0x6a] + 0x40),*(undefined4 *)(iVar3 + 0x54));
  FUN_00503a6c();
  cVar2 = FUN_00503b78();
  if (cVar2 != '\0') {
    (**(code **)(**(int **)(param_1[0x6a] + 0x40) + 8))
              (*(int **)(param_1[0x6a] + 0x40),param_1[0x19]);
  }
  piVar4 = (int *)FUN_00679e90(param_1);
  cVar2 = (**(code **)(*piVar4 + 0x120))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x5c))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x5c))();
      if ((cVar2 != '\0') || ((char)param_1[0x75] == '\0')) goto LAB_00679190;
    }
    if ((char)param_1[0x75] != '\0') {
      FUN_00679e90(param_1);
      iVar3 = FUN_00677f54();
      FUN_0045b0d0(*(undefined4 *)(param_1[0x6a] + 0x40),*(undefined4 *)(iVar3 + 0x68));
    }
    cVar2 = (**(code **)(*param_1 + 0x5c))();
    if (cVar2 == '\0') {
      FUN_00679e90(param_1);
      iVar3 = FUN_00677f54();
      FUN_0045b0d0(*(undefined4 *)(param_1[0x6a] + 0x40),*(undefined4 *)(iVar3 + 0x4c));
    }
  }
LAB_00679190:
  piVar4 = (int *)FUN_00679e90(param_1);
  cVar2 = (**(code **)(*piVar4 + 0x120))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x5c))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x5c))();
      if ((cVar2 != '\0') || ((char)param_1[0x75] == '\0')) {
        FUN_004ee6a0(param_1,&local_30);
        uVar7 = local_30;
        FUN_00679e90(param_1);
        iVar3 = FUN_00677f54();
        uVar6 = *(undefined4 *)(iVar3 + 0x4c);
        FUN_00679e90(param_1);
        iVar3 = FUN_00677f54();
        (**(code **)(*param_1 + 200))
                  (param_1,&local_28,local_8,*(undefined4 *)(iVar3 + 0x50),uVar6,uVar7);
        goto LAB_00679220;
      }
    }
  }
  FUN_004ee6a0(param_1,&local_2c);
  (**(code **)(*param_1 + 0xc4))(param_1,&local_28,&local_8,local_2c);
LAB_00679220:
  if ((char)param_1[0x75] != '\0') {
    iVar3 = FUN_00679e90(param_1);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00679e90(param_1);
      cVar2 = (**(code **)(*piVar4 + 0x120))();
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x54))(param_1,local_18);
        FUN_0040c268(local_18,1,1);
        local_10 = local_10 + -1;
        local_c = local_c + -1;
        FUN_0045bda4(*(undefined4 *)(param_1[0x6a] + 0x48),1);
        FUN_00679e90(param_1);
        iVar3 = FUN_00677f54();
        FUN_0045b850(*(undefined4 *)(param_1[0x6a] + 0x44),*(undefined4 *)(iVar3 + 0x74));
        FUN_0045b9a4(*(undefined4 *)(param_1[0x6a] + 0x44),2);
        cVar2 = FUN_004fd5ac(*(undefined4 *)PTR_DAT_007827e4);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0xb4))(param_1,local_18);
        }
      }
    }
  }
  if ((char)param_1[0x6e] != '\0') {
    FUN_00679be0(param_1);
  }
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00679300;
  puStack_44 = (undefined1 *)0x6792f8;
  thunk_FUN_00406e80(&local_30,2,puVar1);
  return;
}
