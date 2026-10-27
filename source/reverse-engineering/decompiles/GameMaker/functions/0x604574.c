// rea decompile_all
// name: FUN_00604574
// address: 0x604574
// body: available
// range: 0x604574-0x604639 inclusive
// range: 0x604665-0x60468e inclusive
// range: 0x6046b8-0x604894 inclusive
// range: 0x6048c0-0x6048f6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60459c (push 0x6048f7 followed by fs-segment stack chaining); handler 0x6048f7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x604619 (push 0x60463a followed by fs-segment stack chaining); handler 0x60463a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x60486c (push 0x604895 followed by fs-segment stack chaining); handler 0x604895 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00604574(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 ushort param_5)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 *puStack_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_24 = &stack0xfffffffc;
  local_8 = 6;
  do {
    local_c = 0;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_006048f7;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = 0x6045a8;
  FUN_00604cfc(param_1,param_2);
  local_30 = 0xff;
  local_34 = 0x6045c0;
  FUN_00409be0(&local_8,&DAT_004108f8,1);
  local_30 = (uint)param_5;
  local_34 = 1;
  local_38 = &local_8;
  local_3c = &local_c;
  puStack_40 = (undefined4 *)0x6045dd;
  FUN_0060425c(param_1,param_2,0);
  puStack_40 = &local_10;
  puStack_44 = (undefined1 *)0x6045ee;
  FUN_005e2a28(local_8,local_c,0);
  puStack_44 = (undefined1 *)0x6045ff;
  FUN_00409d1c(&local_8,local_10,&DAT_004108f8);
  puStack_44 = (undefined1 *)0x0;
  puStack_48 = (undefined1 *)0x60460e;
  FUN_00600970(param_2,local_8,0xffffffff);
  puStack_4c = &LAB_0060463a;
  puStack_50 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_50;
  uStack_54 = 0;
  puStack_48 = &stack0xfffffffc;
  (**(code **)(*param_2 + 0xac))(param_2,&local_8,5);
  puVar2 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  iVar3 = 1;
  if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) < 2)) {
    puStack_4c = (undefined1 *)0x60467b;
    iVar3 = thunk_FUN_00404478(1,local_8,puVar2);
    iVar4 = extraout_EDX;
  }
  switch(*(undefined1 *)(iVar4 + iVar3)) {
  case 0:
    break;
  case 1:
    puStack_4c = (undefined1 *)0x6046c5;
    FUN_0040b75c(PTR_PTR_00781c54,&stack0xffffffe8);
    puStack_4c = (undefined1 *)0x6046d4;
    FUN_005df5ec(&PTR_LAB_005fb3a0,1,unaff_EBX);
    puStack_4c = (undefined1 *)0x6046d9;
    FUN_00406618();
    break;
  case 2:
    puStack_4c = (undefined1 *)0x6046eb;
    FUN_0040b75c(PTR_PTR_007816ac,&stack0xffffffe4);
    puStack_4c = (undefined1 *)0x6046fa;
    FUN_005df5ec(&PTR_LAB_005fb460,1,unaff_ESI);
    puStack_4c = (undefined1 *)0x6046ff;
    FUN_00406618();
    break;
  case 3:
    puStack_4c = (undefined1 *)0x604711;
    FUN_0040b75c(PTR_PTR_00781878,&stack0xffffffe0);
    puStack_4c = (undefined1 *)0x604720;
    FUN_005df5ec(&PTR_LAB_005fb528,1,unaff_EDI);
    puStack_4c = (undefined1 *)0x604725;
    FUN_00406618();
    break;
  case 4:
    puStack_4c = (undefined1 *)0x604737;
    FUN_0040b75c(PTR_PTR_00782344,&local_24);
    puStack_4c = (undefined1 *)0x604746;
    FUN_005df5ec(&PTR_LAB_005fb5f8,1,local_24);
    puStack_4c = (undefined1 *)0x60474b;
    FUN_00406618();
    break;
  case 5:
    puStack_4c = (undefined1 *)0x60475d;
    FUN_0040b75c(PTR_PTR_00781ca8,&local_28);
    puStack_4c = (undefined1 *)0x60476c;
    FUN_005df5ec(&PTR_LAB_005fb6c8,1,local_28);
    puStack_4c = (undefined1 *)0x604771;
    FUN_00406618();
    break;
  case 6:
    puStack_4c = (undefined1 *)0x604783;
    FUN_0040b75c(PTR_PTR_00781dbc,&local_2c);
    puStack_4c = (undefined1 *)0x604792;
    FUN_005df5ec(&PTR_LAB_005fb7a0,1,local_2c);
    puStack_4c = (undefined1 *)0x604797;
    FUN_00406618();
    break;
  case 7:
    puStack_4c = (undefined1 *)0x6047a6;
    FUN_0040b75c(PTR_PTR_00781a30,&local_30);
    puStack_4c = (undefined1 *)0x6047b5;
    FUN_005df5ec(&PTR_LAB_005fb868,1,local_30);
    puStack_4c = (undefined1 *)0x6047ba;
    FUN_00406618();
    break;
  case 8:
    puStack_4c = (undefined1 *)0x6047c9;
    FUN_0040b75c(PTR_PTR_0078276c,&local_34);
    puStack_4c = (undefined1 *)0x6047d8;
    FUN_005df5ec(&PTR_LAB_005fb928,1,local_34);
    puStack_4c = (undefined1 *)0x6047dd;
    FUN_00406618();
    break;
  default:
    puStack_4c = (undefined1 *)0x6047ec;
    FUN_0040b75c(PTR_PTR_007822c0,&local_38);
    puStack_4c = (undefined1 *)0x6047fb;
    FUN_005df5ec(&PTR_LAB_005fb0bc,1,local_38);
    puStack_4c = (undefined1 *)0x604800;
    FUN_00406618();
  }
  iVar3 = 3;
  if ((local_8 == 0) || (iVar4 = local_8, *(uint *)(local_8 + -4) < 4)) {
    puStack_4c = (undefined1 *)0x604816;
    iVar3 = thunk_FUN_00404478();
    iVar4 = extraout_EDX_00;
  }
  cVar1 = *(char *)(iVar4 + iVar3);
  if (cVar1 == '\x01') {
    local_c = 6;
    iVar3 = local_c;
  }
  else if (cVar1 == '\x03') {
    iVar4 = 4;
    if ((local_8 == 0) || (iVar5 = local_8, *(uint *)(local_8 + -4) < 5)) {
      puStack_4c = (undefined1 *)0x604847;
      iVar4 = thunk_FUN_00404478();
      iVar5 = extraout_EDX_01;
    }
    iVar3 = *(byte *)(iVar5 + iVar4) + 2;
    if (SCARRY4((uint)*(byte *)(iVar5 + iVar4),2)) {
      puStack_4c = (undefined1 *)0x604855;
      iVar3 = FUN_00405944();
    }
  }
  else {
    iVar3 = local_c;
    if (cVar1 == '\x04') {
      local_c = 0x12;
      iVar3 = local_c;
    }
  }
  local_c = iVar3;
  puStack_50 = &LAB_00604895;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  puStack_4c = &stack0xfffffffc;
  if (SBORROW4(local_c,1)) {
    puStack_4c = &stack0xfffffffc;
    FUN_00405944();
  }
  (**(code **)(*param_2 + 0xac))(param_2,&local_8);
  puVar2 = puStack_44;
  *in_FS_OFFSET = 0;
  *in_FS_OFFSET = puStack_4c;
  puStack_44 = &LAB_006048fe;
  puStack_48 = (undefined1 *)0x6048da;
  thunk_FUN_00406e80(&local_3c,0xb,puVar2);
  puStack_48 = (undefined1 *)0x6048e8;
  FUN_00409ce0(&local_10,&DAT_004108f8);
  puStack_48 = (undefined1 *)0x6048f6;
  FUN_00409ce0(&local_8,&DAT_004108f8);
  return;
}
