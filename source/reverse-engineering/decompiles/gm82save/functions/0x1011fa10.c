// rea decompile_all
// name: FUN_1011fa10
// address: 0x1011fa10
// body: available
// range: 0x1011fa10-0x1011fb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1011fa10(char param_1,byte *param_2,SIZE_T param_3,SIZE_T *param_4)

{
  LPVOID lpMem;
  code *pcVar1;
  HANDLE pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  LPVOID pvVar5;
  uint uVar6;
  int iVar7;
  SIZE_T SVar8;
  uint extraout_EDX;
  uint extraout_EDX_00;
  byte local_24 [8];
  int local_1c;
  int local_14;

  if (param_1 == '\0') {
    return;
  }
  if ((param_1 != '\x01') && (*param_4 != 0xffffffff)) {
    return;
  }
  FUN_1010a5e0(local_24,param_2,param_3);
  uVar6 = 6;
  pbVar3 = param_2;
  SVar8 = param_3;
  switch(local_24[0]) {
  case 0:
  case 3:
    uVar6 = local_1c + 4;
    break;
  case 1:
    iVar7 = local_14 + 1;
    if (local_14 == 0) {
      iVar7 = 0;
    }
    uVar6 = local_1c + 8 + iVar7;
    break;
  case 2:
    break;
  case 4:
    iVar7 = local_14 + 1;
    if (local_14 == 0) {
      iVar7 = 0;
    }
    uVar6 = local_1c + 2 + iVar7;
    break;
  case 5:
    uVar6 = 2;
    break;
  default:
    goto switchD_1011fa6f_default;
  }
  SVar8 = param_3 - uVar6;
  if (param_3 < uVar6) {
    FUN_10136a50(uVar6,param_3,param_3,&PTR_s_C__Users_runneradmin__rustup_too_10158004);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pbVar3 = param_2 + uVar6;
switchD_1011fa6f_default:
  if (((SVar8 == 0) || ((*pbVar3 != 0x2f && (*pbVar3 != 0x5c)))) &&
     ((local_24[0] == 0xff || (local_24[0] == 5)))) {
    if (0 < (int)*param_4) {
      pvVar5 = (LPVOID)param_4[1];
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,pvVar5);
    }
    *param_4 = 0xffffffff;
  }
  else {
    pbVar3 = (byte *)FUN_10110f10(param_2,param_3);
    uVar6 = extraout_EDX;
    while (pbVar3 != (byte *)0x0) {
      pbVar4 = (byte *)FUN_10110f10(pbVar3,uVar6);
      param_2 = pbVar3;
      param_3 = uVar6;
      uVar6 = extraout_EDX_00;
      pbVar3 = pbVar4;
    }
    if (param_3 == 0) {
      pvVar5 = (LPVOID)0x1;
      SVar8 = *param_4;
    }
    else {
      pvVar5 = FUN_10107380(0,param_3);
      if (pvVar5 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      memcpy(pvVar5,param_2,param_3);
      SVar8 = *param_4;
    }
    if (0 < (int)SVar8) {
      lpMem = (LPVOID)param_4[1];
      pvVar2 = GetProcessHeap();
      HeapFree(pvVar2,0,lpMem);
    }
    *param_4 = param_3;
    param_4[1] = (SIZE_T)pvVar5;
    param_4[2] = param_3;
    *(undefined1 *)(param_4 + 3) = 0;
  }
  return;
}
